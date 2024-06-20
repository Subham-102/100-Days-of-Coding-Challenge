class Solution {

    private:
    TreeNode* solve(TreeNode* node, int val)
    {
        if(node==NULL)
        {
            node=new TreeNode(val);
            return node;
        }
        
        if(val < node->val)
        {
            node->left=solve(node->left, val);
        }
        else if(val > node->val)
        {
            node->right=solve(node->right, val);
        }
        
        return node;
    }
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        
        return solve(root, val);
    }
};