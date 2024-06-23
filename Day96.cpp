class Solution {
public:
    TreeNode* helper(ListNode* & head, int n){
        if(n<=0 || head==NULL){
            return NULL;
        }
         TreeNode* leftsubtree=helper(head,n/2);
        TreeNode* root=new TreeNode(head->val);
        root->left=leftsubtree;

        //Update head
        head=head->next;

        root->right=helper(head,n-n/2-1);
        return root;   

   }
    TreeNode* sortedListToBST(ListNode* head) {
        ListNode* temp=head;
        int n=0;
         while(temp){
             n++;
             temp=temp->next;
         }

         return helper(head,n);
    }
};