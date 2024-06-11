class Solution {
public:

    int height(TreeNode* root){
        if(root == nullptr) return 0;
        
        int l = height(root->left);
        int r = height(root->right);

        return 1 + max(l,r);
    }
  
    bool isBalanced(TreeNode* root) {

        if(root == nullptr) return true;
         
        int l = height(root->left);
        int r = height(root->right);

        if(abs(l-r) > 1) return false;

        bool lf = isBalanced(root->left);
        bool rh = isBalanced(root->right);

        if(!lf || !rh) return false;


        return true;
        
        
    }
};