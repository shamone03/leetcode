#include "../datastructs/ListNode.h"

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

    ListNode* l3 = new ListNode();
    
    ListNode* head = l3;
    while (list1 != nullptr && list2 != nullptr) {
        l3->next = new ListNode();
        l3 = l3->next;
        if (list1->val < list2->val) {
            l3->val = list1->val;

            list1 = list1->next;
        } else {
            
            l3->val = list2->val;
            
            list2 = list2->next;
        } 
    }

    if (list1 == nullptr && list2 != nullptr) {

        l3->next = list2;

    }
    if (list2 == nullptr && list2 != nullptr) {
        l3->next = list1;

    }
    return head->next;
}
