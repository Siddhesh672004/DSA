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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        ListNode *temp = head;
        int count = 1;
        while(temp->next){
            temp = temp->next;
            count++;
        }

        if (n == count) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }

        if(n == 1){
            temp = head;
            while(temp->next->next){
                temp = temp->next;
            }
            temp->next = NULL;
            return head;
        }
        else{
            count = count - n;
            temp = head;
            while(count != 1){
                temp = temp->next;
                count--;
            }
            temp->next = temp->next->next;
            return head;
        }
       
    }
};