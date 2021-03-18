#include "../leet.h"

// https://leetcode-cn.com/problems/container-with-most-water/

namespace N0011 {
class Solution {
public:
int maxArea(vector<int>& height) {
    int res = 0;
    int left = 0;
    int right = height.size() - 1;
    while (left < right) {
        res = max(res, (right - left) * min(height[left], height[right]));
        height[left] < height[right] ? left ++ : right--;
    }
    return res;
}
};
}