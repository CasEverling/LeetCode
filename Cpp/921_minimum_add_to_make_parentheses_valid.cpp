/* Problem available in: https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/ */
/* Runtime: 0ms - Beats 100% */
/* Memory: 8.23Mb - Bbeats 94.97% */

class Solution {
public:
    int minAddToMakeValid(string s) {
        if (!s.length()) return 0;

        int missing = 0;
        int count = 0;

        for (const char& c : s) {
            if (c == '(') count++;
            else count --;
            if (count < 0) { missing ++; count = 0; }
        }

        return missing + count;
    }
};
