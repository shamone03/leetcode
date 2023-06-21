// https://leetcode.com/problems/row-with-maximum-ones/

#include <vector>

using std::vector;

vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) { 
    vector<int> result(2, -1);
    int sum = 0;
    for (int i = 0; i < mat.size(); i++) {
        for (int j = 0; j < mat[i].size(); j++) {
            sum += mat[i][j];
 
            if (j == mat[i].size() - 1) {
                if (sum > result[1]) {
                    result[0] = i;
                    result[1] = sum;
                }
                sum = 0;
            }
        }
    }

    return result;
}