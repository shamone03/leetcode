#include <iostream>
#include <vector>
#include <string>
#include "problems/pivotIndex.cpp"
#include "problems/reverseList.cpp"
#include "problems/middleNode.cpp"
#include "problems/maxProfit.cpp"
#include "datastructs/ListNode.h"


int main() {
    std::vector<int> v{7, 5, 3, 6, 4};

    std::cout << maxProfit(v) << std::endl;
    return 0;
}