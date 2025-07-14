class Solution {
public:
    string convert(string s, int numRows) {
        std::string s2(s.length(), '\0');

        if (s.length() <= numRows ||
            numRows == 1) return s;
        
        int x {(numRows-1) * 2};

        int offset_1 = 0;
        int offset_2 = 0;
        int offset = 0;
        auto it = s2.begin();

        for (int i = 0; i < numRows; i ++) {
            offset_1 = x - 2*i;
            offset_2 = 2*i;

            if (offset_1 == 0 || offset_2 == 0)
                offset_1 = offset_2 = x;

            offset = offset_2;

            for (int j = 0; i+j < s.length(); j += offset) {
                (*it++) = s[i+j]; 
                if (offset == offset_1) offset = offset_2;
                else offset = offset_1;
            }
        }

        return s2;
    }
};
