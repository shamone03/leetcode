#include <vector>
using std::vector;

int search(vector<int>& nums, int target) {
    int r = nums.size() - 1;
    int l = 0;
    int mid;

    while (l <= r) {
        mid = l + ((r - l) / 2);
        if (nums[mid] == target) {
            return mid;
        }
        if (nums[mid] < target) {
            l = mid + 1;
        }
        if (nums[mid] > target) {
            r = mid - 1;
        }
    }

    return -1;
}