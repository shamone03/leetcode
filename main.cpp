#include <iostream>
#include <vector>
#include <string>
#include "problems/runningSum.cpp"
#include "datastructs/printVector.cpp"
// #include "problems/isPalindrome.cpp"
#include "problems/strStr.cpp"
#include "problems/searchMatrix.cpp"

int main() {
    std::vector<std::vector<int>> v{
        { 1,  3,  5,  7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };
    // searchMatrix(v, 3);
    std::cout << searchMatrix(v, 2) << std::endl;

    // for (int i = 0; i < v.size(); i++) {
    //     for (int j = 0; j < v[i].size(); j++) {
    //         std::cout << (i * v[i].size()) + j << std::endl;
    //     }
    // }
    return 0;
}