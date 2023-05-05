// https://leetcode.com/problems/search-a-2d-matrix/

#include <vector>
#include <iostream>
using std::vector;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int s = matrix[0].size();
    int l = 0;
    int r = ((matrix.size() - 1) * s) + matrix[0].size() - 1;

    int mid = (r - l) / 2;
    int m[2]{0};

    while (l <= r) {
        mid = l + ((r - l) / 2);
        m[0] = mid / s;
        m[1] = mid % s;
        if (matrix[m[0]][m[1]] == target) {
            return true;
        }
        if (matrix[m[0]][m[1]] < target) {
            l = mid + 1;
        }
        if (matrix[m[0]][m[1]] > target) {
            r = mid - 1;
        }
    }

    return false;

}