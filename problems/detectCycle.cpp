#include "../datastructs/ListNode.h"
#include <map>
// https://leetcode.com/problems/linked-list-cycle-ii/

ListNode* detectCycle(ListNode* head) {
    std::map<ListNode*, int> visited;
    int index = 0;
    for (ListNode* node = head; node != nullptr; node = node->next) {
        if (visited.count(node)) {
            return node;
        }
        visited.insert(std::pair<ListNode*, int>(node, index));
    }
    return nullptr;
}