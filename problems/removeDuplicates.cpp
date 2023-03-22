#include <vector>
#include <limits.h>
// https://leetcode.com/problems/remove-duplicates-from-sorted-array/

int removeDuplicates(std::vector<int>& nums) {
    int newRepeat = INT32_MIN;
    int k = 0;

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] > newRepeat) {
            newRepeat = nums[i];
            nums[k++] = nums[i];
        }
    }

    return k;
}

int removeDuplicatesSlow(std::vector<int>& nums) {
    int k = nums.size();
    int i = 0;
    int j = 1;

    for (int l = 1; l < nums.size(); l++) {
        if (nums[l - 1] == nums[l]) {
            k--;
        }
    }

    while (i < nums.size() && j < nums.size()) {
        if (nums[i] == nums[j]) {
            j++;
        } else {
            
            if ((j - i) > 1) {
                int i0 = i;
                int j0 = j;
                while (j0 < nums.size()) {
                    nums[i0++ + 1] = nums[j0++];
                }

            }

            i++;
            j = i + 1;
            
        }
    }

    if (i == 0 && j == nums.size()) {
        k = 1;
    }

    return k;
    
}