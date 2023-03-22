#include "runningSum.cpp"
// https://leetcode.com/problems/find-pivot-index/

int pivotIndex(std::vector<int> &nums) {
    runningSum(nums);
    if ((nums.at(nums.size() - 1) - nums.at(0)) == 0) {
        return 0;
    }
    for (int i = 1; i < nums.size(); i++) {
        
        if (nums.at(i - 1) == nums.at(nums.size() - 1) - nums.at(i)) {
            return i;
        }
    }
    return -1;
}