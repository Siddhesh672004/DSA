class Solution {
  public:
    // Function to check whether the list is palindrome.
    bool isPalindrome(Node *head) {
        
        // Initialize two pointers, slow and fast.
        Node *slow = head, *fast = head->next;
        
        // Move slow to the middle and fast to the end of the list.
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next;
        }
        // Start reversing the second half of the list.
        Node *curr = slow->next, *prev = NULL, *nxt = NULL;
        slow->next = NULL;
        
        // Reverse the second half of the list.
        while(curr){
            nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        
        // Compare the first half (head) and the reversed second half (prev).
        while(prev){
            // If values don't match, it's not a palindrome.
            if(prev->data != head->data)    return false;
            prev = prev->next;
            head = head->next;
        }
        return true;       // If all elements matched, it's a palindrome.
    }
};