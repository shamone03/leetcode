#include <iostream>
#include <vector>
#include <string>
#include "problems/pivotIndex.cpp"
#include "problems/reverseList.cpp"
#include "problems/middleNode.cpp"
#include "datastructs/ListNode.h"


int main() {
    ListNode* l = new ListNode(0, new ListNode(1, new ListNode(2)));
    std::cout << middleNode(l)->val << std::endl;
    return 0;
}