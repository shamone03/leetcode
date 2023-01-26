#include <vector>

int removeElement(std::vector<int>& nums, int val) {
    int k = 0;
    int n = nums.size();
    
    for (int i = 0; i < n; i++) {
        if (nums[i] == val) {
            k++;
            for (int j = i + 1; j < nums.size(); j++) {
                nums[j - 1] = nums[j];
            }
            i--;
            n--;
        }
    }

    return nums.size() - k;
}