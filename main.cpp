#include <iostream>
#include <vector>
#include <string>
#include "datastructs/ListNode.h"
#include "datastructs/printVector.cpp"
#include "problems/removeDuplicates.cpp"
#include "problems/removeElement.cpp"
#include "problems/searchInsert.cpp"

int main() {
    std::vector v{1,3,5,6};

    std::cout << searchInsert(v, 2) << std::endl;
    
    return 0;
}