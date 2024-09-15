class Solution {
  public:
  
    Node *head = NULL, *lastNode = NULL;    //Pointers to trach head & last processed node
    //Recursive function for DLL
    void help(Node  *root){
        if(!root)   return;     //If root node is null then return
        help(root -> left);     //Traverse to the leftmost Node of tree
        
        if(!head)   head = root;    //set head for the first leftmost node processed
        if(lastNode)    lastNode->right = root;     //link previous node to current for DLL
        root->left = lastNode;      //link current node to previous for DLL
        lastNode = root;        //Move lastnode to current
        
        help(root -> right);        //Traverse to the Rightmost node of tree 
    }
    
    Node* bToDLL(Node* root) {
        help(root);     
        return head;        
    }
};