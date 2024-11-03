
class Solution {
  public:
    bool isLengthEven(struct Node **head) {
        int count = 0;
        Node* temp = *head;
        
        while (temp) {
            temp = temp->next;
            count++;
        }
        
        return (count % 2 == 0);
    }
};