/* Question url: https://leetcode.com/problems/valid-anagram/description/ */
// Time: 0ms - Beats 100%
// Memory: 9.69MB - Beats 74.21%

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;

        int count[26] = {};

        for (char c : s)
            count[c-'a'] ++;

        for (char c : t)
            if (!(count[c-'a']--)) return false;
        
        return true;

    }
};

