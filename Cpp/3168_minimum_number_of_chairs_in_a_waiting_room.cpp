class Solution {
public:
    int minimumChairs(string s) {
        int max_sum = 0;
        int current_sum = 0;

        for (const char& c : s) {
            current_sum += ('I' - c) / 3;
            max_sum = std::max(max_sum, current_sum);
        }

        return max_sum;
    }
};
