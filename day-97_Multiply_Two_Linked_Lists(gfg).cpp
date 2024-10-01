class solution {
  public:
    long long multiplyTwoLists(Node *first, Node *second) {
        long long int num1 = 0, num2 = 0;
        int mod = 1000000007;       // Large prime number to avoid overflow
        Node* temp = first;
        
        // Traverse the first linked list and form the number
        while(temp){
            num1 = (num1 *10 + (temp->data)) % mod;     // Update num1 with current node's value
            temp = temp->next;      // Move to the next node
        }
        
        // Traverse the second linked list and form the number
        temp = second;
        while(temp){
            num2 = (num2 * 10 + (temp->data)) % mod;    // Update num2 with current node's value
            temp = temp->next;      // Move to the next node
        }
        
        // Multiply the two numbers and return the result modulo mod
        return (num1 * num2) % mod;
    }
};