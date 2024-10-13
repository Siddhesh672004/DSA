class Solution {
  public:
    void deleteAlt(struct Node *head) {
        
        Node *temp = head;
        if(!head) return;
        
        while(temp && temp->next){
            Node *nodeToDelete = temp->next;
            temp->next = temp->next->next;
            free(nodeToDelete);
            temp = temp->next;
        }
    }
};