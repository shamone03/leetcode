// https://leetcode.com/problems/search-a-2d-matrix/

#include <vector>
#include <iostream>
using std::vector;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int* l = new int[2]{0, 0};

    long long unsigned int* r = new long long unsigned int[2]{matrix.size() - 1, matrix[0].size() - 1};
    int s = matrix[0].size();
    int lnorm = (l[0] * s) + l[1];
    int rnorm = (r[0] * s) + r[1];

    int mnorm;
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