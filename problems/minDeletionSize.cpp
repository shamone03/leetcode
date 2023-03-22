#include <vector>
#include <string>
#include <algorithm>
// https://leetcode.com/problems/delete-columns-to-make-sorted/

int minDeletionSize(std::vector<std::string> &strs) {
    int count = 0;
    std::vector<int> v;
    
    for (int i = 1; i < strs.size(); i++) {
        for (int j = 0; j < strs[i].length(); j++) {
            if (strs[i][j] < strs[i - 1][j]) {
                if (std::count(v.begin(), v.end(), j) == 0) {
                    count++;
                    v.push_back(j);
                }
            }
        }
    }

    return count;
}