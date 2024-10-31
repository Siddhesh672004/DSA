// Return the head after insertion
class Solution {
  public:
    Node* sortedInsert(Node* head, int x) {
        // Code here
        Node *ele = new Node(); // Create a new node
        ele->data = x;
        
        //If the list is empty then new node becomes the head
        if(!head) return ele;
        
        //Insert at beginning if head is smaller than data
        if(x <= head->data){
            ele->next = head;
            head->prev = ele;
            return ele;
        }
        
        Node *temp = head;
        
        while(temp->next && temp->data < x){
            temp = temp->next;
        }
        
        //Insert at the end if the 'x' is greater than the last element
        if(temp->data < x){
            temp->next = ele;
            ele->prev = temp;
            return head;
        }
        
        //Insert in the middle
        Node *previous = temp->prev;
        previous->next = ele;
        ele->prev = previous;
        ele->next = temp;
        temp->prev = ele;
        
        return head;
    }
};
