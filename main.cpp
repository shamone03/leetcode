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


int main() {
    // std::vector<int> v{7, 5, 3, 6, 4};
    // // randomizedSelect(v, 2, v.size() / 2);
    // std::vector<int> s = {v.begin(), v.end() + 1};
    // printVector(s);
    // std::cout << "hello world" << std::endl;
    // std::cout << "hello world" << std::endl;
    std::vector<std::string> v{"cba","daf","ghi"};
    for (int i = 1; i < v.size(); i++) {
        std::cout << "i - 1: " + v[i - 1] << " i: " + v[i] << std::endl;
    }
    std::cout << minDeletionSize(v) << std::endl;
    
    // std::cout << maxProfit(v) << std::endl;
    return 0;
}