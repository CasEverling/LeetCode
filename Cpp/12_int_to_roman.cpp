/* Problem available in https://leetcode.com/problems/integer-to-roman/ */
/* Runtime:     0 ms    - Beats 100.00%                                 */
/* Memory :  8.89 MB    - Beats  91.01%                                 */

const std::vector<std::string> romans1   = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
const std::vector<std::string> romans10  = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
const std::vector<std::string> romans100 = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};


class Solution {
public:
    string intToRoman(int num) {
        std::string romanNumber = "";

        // Calculates the 1000s
        for (int i = 0; i < num / 1000; i++)
            romanNumber += "M";
        
        num %= 1000;
        romanNumber += romans100[num/100];

        num %= 100;
        romanNumber += romans10[num/10];

        num %= 10;
        return romanNumber + romans1[num];
    }
};
