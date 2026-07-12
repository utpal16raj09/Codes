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
private:
    int minDiff = INT_MAX;
    int prevVal = -1; // Initialize to a value lower than any possible node value (0 <= Node.val)

public:
    void inorder(TreeNode* node) {
        if (node == nullptr) return;

        // Traverse left subtree
        inorder(node->left);

        // Process current node
        if (prevVal != -1) {
            minDiff = std::min(minDiff, node->val - prevVal);
        }
        prevVal = node->val;

        // Traverse right subtree
        inorder(node->right);
    }
    
    int minDiffInBST(TreeNode* root) {
        inorder(root);
        return minDiff;
    }

};
