#include <iostream>
#include <vector>
#include <string>
#include "datastructs/ListNode.h"
#include "datastructs/printVector.cpp"
#include "problems/removeDuplicates.cpp"
#include "problems/removeElement.cpp"

int main() {
    std::vector v{0,1,2,2,3,0,4,2};

    std::cout << removeElement(v, 2) << std::endl;
    
    printVector(v);
    return 0;
}