class Solution {
  public:
  // Helper function to perform inorder traversal of a BST and store values in a vector
  void inorder(Node *root, vector<int> &temp){
      if(!root) return;
      inorder(root -> left, temp);  // Traverse left subtree
      temp.push_back(root -> data); // Store node's data
      inorder(root -> right, temp); // Traverse right subtree
  }
  
  // Function to merge two BSTs into a sorted list
  vector<int> merge(Node *root1, Node *root2) {
      vector<int> first, second, ans;
      inorder(root1, first);  // Get inorder traversal of the first BST
      inorder(root2, second); // Get inorder traversal of the second BST
      
      int i = 0, j = 0;
      
      // Merge two sorted arrays into one
      while(i < first.size() && j < second.size()){
          if(first[i] <= second[j]){
              ans.push_back(first[i++]);  // Add element from first array
          } else {
              ans.push_back(second[j++]); // Add element from second array
          }
      }
      
      // Add remaining elements from first array, if any
      while(i < first.size()){
          ans.push_back(first[i++]);
      }
      
      // Add remaining elements from second array, if any
      while(j < second.size()){
          ans.push_back(second[j++]);
      }
      return ans; // Return merged sorted list
  }
};
