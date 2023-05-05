// https://leetcode.com/problems/search-a-2d-matrix/

#include <vector>
#include <iostream>
using std::vector;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int s = matrix[0].size();
    int lnorm = 0;
    int rnorm = ((matrix.size() - 1) * s) + matrix[0].size() - 1;

    int mnorm = (rnorm - lnorm) / 2;
    int* m = new int[2]{};

    while (lnorm <= rnorm) {
        mnorm = lnorm + ((rnorm - lnorm) / 2);
        m[0] = mnorm / s;
        m[1] = mnorm % s;
        if (matrix[m[0]][m[1]] == target) {
            return true;
        }
        if (matrix[m[0]][m[1]] < target) {
            lnorm = mnorm + 1;
        }
        if (matrix[m[0]][m[1]] > target) {
            rnorm = mnorm - 1;
        }
    }

    return false;

}