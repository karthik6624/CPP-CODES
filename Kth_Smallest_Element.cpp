class Solution {
public:

    void inorder(vector<int>&ans,TreeNode * root){
        if(root==NULL) return ;
        ans.push_back(root->val);
        inorder(ans,root->left);
        inorder(ans,root->right);
    }

    int kthSmallest(TreeNode* root, int k) {
        vector<int>ans;
        inorder(ans,root);
        sort(ans.begin(),ans.end());
        return ans[k-1];        
    }
};
