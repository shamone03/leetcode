#include <iostream>
#include <vector>
#include <string>

#include "datastructs/ListNode.h"

void printList(ListNode* l) {
    for (ListNode* i = l; i != nullptr; i = i->next) {
        std::cout << i->val << " ";
    }
    std::cout << std::endl;
}

int main() {
    return 0;
}