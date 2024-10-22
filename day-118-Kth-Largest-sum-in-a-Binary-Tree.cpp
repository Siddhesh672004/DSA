/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    long long kthLargestLevelSum(TreeNode* root, int k) {
        if (!root) return -1;  // Edge case: empty tree

        queue<TreeNode*> queue;
        priority_queue<long long, vector<long long>, greater<long long>> pq;  // Min heap for kth largest
        queue.push(root);

        while (!queue.empty()) {
            int size = queue.size();
            long long sum = 0;
            for (int i = 0; i < size; ++i) {
                TreeNode* node = queue.front();
                queue.pop();
                sum += node->val;

                if (node->left) {
                    queue.push(node->left);
                }
                if (node->right) {
                    queue.push(node->right);
                }
            }

            pq.push(sum);
            if (pq.size() > k) {
                pq.pop();  // Keep only the k largest sums
            }
        }

        return pq.size() < k ? -1 : pq.top();
    }
};