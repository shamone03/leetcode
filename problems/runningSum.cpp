#include <vector>

std::vector<int> runningSum(std::vector<int> &nums) {
    for (std::vector<int>::iterator i = nums.begin() + 1; i != nums.end(); ++i) {
        *i += *(i - 1);
    }
    return nums;
}