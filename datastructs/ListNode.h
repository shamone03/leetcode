#pragma once

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void printList(ListNode* l) {
    for (ListNode* i = l; i != nullptr; i = i->next) {
        std::cout << i->val << " ";
    }
    std::cout << std::endl;
}