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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(0); // dummy head to simplify the code
        ListNode* current = dummy; // pointer to the current node in the result list
        int carry = 0; // carry for values greater than 10

        // Traverse both lists
        while (l1 != nullptr || l2 != nullptr) {
            int x = (l1 != nullptr) ? l1->val : 0;
            int y = (l2 != nullptr) ? l2->val : 0;

            int sum = x + y + carry; // current sum including carry
            carry = sum / 10; // update carry for next position
            current->next = new ListNode(sum % 10); // create a new node with the digit value
            current = current->next; // move to the next node

            // Move to the next nodes in l1 and l2, if available
            if (l1 != nullptr) l1 = l1->next;
            if (l2 != nullptr) l2 = l2->next;
        }

        // If there's a remaining carry, add a new node with its value
        if (carry > 0) {
            current->next = new ListNode(carry);
        }

        return dummy->next;
    }
};