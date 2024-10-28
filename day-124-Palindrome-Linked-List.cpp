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
    bool isPalindrome(ListNode* head) {
        if (!head || !head->next) return true;  // A list with 0 or 1 node is always a palindrome

        // Step 1: Find the middle of the linked list
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        // Step 2: Reverse the second half of the list
        ListNode* prev = nullptr;
        while (slow) {
            ListNode* temp = slow->next;
            slow->next = prev;
            prev = slow;
            slow = temp;
        }
        
        // Step 3: Compare the first and second halves
        ListNode* left = head;
        ListNode* right = prev;  // `prev` is now the head of the reversed second half
        while (right) {  // Only need to compare till the end of the reversed half
            if (left->val != right->val) {
                return false;
            }
            left = left->next;
            right = right->next;
        }

        return true; 
    }
};