class Solution {
    bool search(TreeNode* root, int& key) {
        if (root == nullptr)
            return true;
        return (key == root->val) and (search(root->left, key) and (search(root->right, key)));
    }

public:
    bool isUnivalTree(TreeNode* root) {
        int key = root->val;
        return search(root, key);
    }
};