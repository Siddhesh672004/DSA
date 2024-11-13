class Solution {
  public:
    // Function to find intersection point in Y shaped Linked Lists.
    int intersectPoint(Node* head1, Node* head2) {
        // Your Code Here
       if (!head1 || !head2) return -1; // Check if either list is empty
        
        Node* t1 = head1;
        Node* t2 = head2;
        
        // Traverse both lists until t1 and t2 meet or both reach NULL
        while (t1 != t2) {
            // Move to the next node, or switch to the other list's head if at the end
            if (t1 == NULL) {
                t1 = head2;
            } else {
                t1 = t1->next;
            }
            
            if (t2 == NULL) {
                t2 = head1;
            } else {
                t2 = t2->next;
            }
        }
        
        // If t1 (or t2) is NULL, there is no intersection
        return t1 ? t1->data : -1;
    }
};