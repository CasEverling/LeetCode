/* Leetcode exercice can be found at: https://leetcode.com/problems/jump-game-ii/ */
// Time 0ms - Beats 100%
// Memory 20.41MB - Beats 62.7%

class Solution {
public:
    int jump(vector<int>& nums) {
        int curr, max_dist, steps = 0;
        int size = nums.size();
        if (size == 1) return 0;

        for (int p = 0; p < size -1;) {

            max_dist = 0; curr = 0;

            for (int d = 1; d <= nums[p]; d++) {
                if (p + d >= size -1) return ++steps;
                if (d + nums[p+d] > max_dist) {
                    curr = d;
                    max_dist = d + nums[p+d];
                }
            }

            steps++;
            p += curr;
        }
        return steps;
    }
};
