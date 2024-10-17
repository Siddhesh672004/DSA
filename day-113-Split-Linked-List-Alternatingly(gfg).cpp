class Solution {
public:
    // Function to split a linked list into two lists alternately
    vector<Node*> alternatingSplitList(struct Node* head) {
        // Initialize the two lists' head pointers
        Node* first = NULL;
        Node* second = NULL;
        Node* firstTail = NULL;
        Node* secondTail = NULL;
        
        // Boolean to track whether we're adding to the first or second list
        bool toFirst = true;
        
        // Traverse the original list
        Node* current = head;
        while (current != NULL) {
            if (toFirst) {
                // Add the node to the first list
                if (first == NULL) {
                    first = current;   // Set head of first list
                    firstTail = first; // Track tail of first list
                } else {
                    firstTail->next = current;
                    firstTail = firstTail->next;
                }
            } else {
                // Add the node to the second list
                if (second == NULL) {
                    second = current;  // Set head of second list
                    secondTail = second; // Track tail of second list
                } else {
                    secondTail->next = current;
                    secondTail = secondTail->next;
                }
            }
            // Move to the next node
            current = current->next;
            // Switch between lists
            toFirst = !toFirst;
        }
        
        // Terminate the lists
        if (firstTail != NULL) firstTail->next = NULL;
        if (secondTail != NULL) secondTail->next = NULL;
        
        // Return the two lists as a vector
        return {first, second};
    }
};
