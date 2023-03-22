#include "../datastructs/ListNode.h"
// https://leetcode.com/problems/middle-of-the-linked-list/

ListNode* middleNode(ListNode* l) {
    int size = 0;
    for (ListNode* i = l; i != nullptr; i = i->next) {
        size++;
    }
    for (int i = 0; i < ((size/2)); i++) {
        l = l->next;
    }
    return l;
}