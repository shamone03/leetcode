#include <vector>
// https://leetcode.com/problems/running-sum-of-1d-array/

std::vector<int> runningSum(std::vector<int> &nums) {
    for (std::vector<int>::iterator i = nums.begin() + 1; i != nums.end(); ++i) {
        *i += *(i - 1);
    }
    return nums;
}