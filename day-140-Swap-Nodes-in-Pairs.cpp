/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        
        ListNode* prev = dummy;
        
        while (prev->next && prev->next->next) {
            // Identify the two nodes to swap
            ListNode* first = prev->next;
            ListNode* second = prev->next->next;
            
            // Swap the nodes
            first->next = second->next;
            second->next = first;
            prev->next = second;
            
            // Move the prev pointer two nodes ahead for the next swap
            prev = first;
        }
        
        // Return the new head
        ListNode* newHead = dummy->next;
        delete dummy;
        return newHead;
    }
};