#include <iostream>
#include <vector>
#include <string>
#include "problems/pivotIndex.cpp"
#include "problems/reverseList.cpp"
#include "datastructs/ListNode.h"


int main() {
    ListNode* l = new ListNode(0, new ListNode(1, new ListNode(2, new ListNode(3))));
    printList(reverseList(l));
    return 0;
}