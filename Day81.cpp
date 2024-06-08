class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        
        if(root==NULL){
            return ans;
        }
        
        queue<TreeNode*> q;
        q.push(root);

        bool leftToRight=true;
        while(!q.empty()){
            int size=q.size();
            vector<int> store(size);
            for(int i=0;i<size;i++){
                TreeNode* node=q.front();
                q.pop();
    
                int index=i;
                store[index]=node->val;

                if(node->left){
                    q.push(node->left);
                }
                if(node->right){
                    q.push(node->right);
                }
            }
            ans.push_back(store);
        }
        return ans;
    }
};