vector<vector<int>> levelorder(TreeNode *root){
    vector<vector<int>>ans;
    queue<TreeNode*>q;
    if(root==NULL)return ans;
    q.push(root);
    
    while(!q.empty()){
        int size=q.size();
        vector<int>level;
        for(int i=0;i<size;i++){
              TreeNode *node=q.front();
                q.pop();
            if(node->left!=NULL)q.push_back(node->left);
            if(node->right!=NULL)q.push_back(node->right);
            level.push_back(node->val);
        }
        ans.push_back(level);
    }
    return ans;
}
