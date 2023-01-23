#include <iostream>
#include <vector>
#include <string>
#include "datastructs/ListNode.h"
#include "datastructs/printVector.cpp"
#include "problems/removeDuplicates.cpp"

int main() {
    std::vector v{0,0,0,0,3};

    std::cout << removeDuplicates(v) << std::endl;
    
    printVector(v);
    return 0;
}