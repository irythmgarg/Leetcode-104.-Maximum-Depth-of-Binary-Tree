class Solution {
public:
    // Function to calculate the maximum depth of a binary tree
    int maxDepth(TreeNode* root) {
        if (!root)
            return 0;  // Base case: empty tree has depth 0

        // Recursively calculate the depth of left and right subtrees
        int left = maxDepth(root->left);
        int right = maxDepth(root->right);

        // The depth of the current node is 1 + the maximum of the left and right subtree depths
        return 1 + max(left, right);
    }
};
