/* Question url: https://leetcode.com/problems/container-with-most-water/description/ */

class Solution {
public:

    int maxArea(vector<int>& height) {
        int i = 0, j = height.size()-1;
        int max_volume = 0;

        while (i != j) {
            max_volume = std::max(
                max_volume, 
                (j-i) * std::min(height[i], height[j])
            );

            if (height[i] > height[j])
                j--;
            else
                i++;
        }

        return max_volume;
    }

    int maxAreaFirstAlgorithm(vector<int>& height) {
        int max_volume = 0;

        for (int i = 0; i < height.size(); i++) {
            for (int j = height.size()-1; j > i; j--) {
                if (height[i] * (j-i) < max_volume) 
                    break;
                max_volume = std::max(
                    max_volume, 
                    (j-i) * std::min(height[i], height[j])
                );
            }
        }
            
        return max_volume;
    }

    
};
