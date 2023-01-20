#include <iostream>
#include <vector>
#include <string>
#include "datastructs/ListNode.h"
#include "datastructs/printVector.cpp"
#include "problems/pivotIndex.cpp"
#include "problems/reverseList.cpp"
#include "problems/middleNode.cpp"
#include "problems/maxProfit.cpp"
#include "problems/randomizedSelect.cpp"
#include "problems/wordPattern.cpp"
#include "problems/detectCapitalUse.cpp"
#include "problems/minDeletionSize.cpp"
#include "problems/myPow.cpp"
#include "problems/findMinArrowShots.cpp"
#include "problems/minFlipsMonoIncr.cpp"


int main() {
    // std::vector<int> v{7, 5, 3, 6, 4};
    // // randomizedSelect(v, 2, v.size() / 2);
    // std::vector<int> s = {v.begin(), v.end() + 1};
    // printVector(s);
    // std::cout << "hello world" << std::endl;
    // std::cout << "hello world" << std::endl;

    // double x = 2.2;
    int min = minFlipsMonoIncr("00011000");
    std::cout << min << std::endl;

    // std::vector<std::vector<int>> v0{{10,16},{2,8},{1,6},{7,12}};
    // std::vector<std::vector<int>> v1{{1,2},{3,4},{5,6},{7,8}};
    // std::cout << findMinArrowShots(v0) << std::endl;

    // std::cout << (double) ((long) x >> 2) << std::endl;
    // std::cout << maxProfit(v) << std::endl;
    return 0;
}