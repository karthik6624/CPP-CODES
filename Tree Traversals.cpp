
void Preorder(BSTNode *r){
    if(r!=NULL){
        cout<<r->val<<" ";
        Preorder(r->left);
        Preorder(r->right);
    }
}
void Postorder(BSTNode *r){
    if(r!=NULL){
         Postorder(r->left);
        Postorder(r->right);
        cout<<r->val<<" ";
    }
}

void Inorder(BSTNode *r){
    if(r!=NULL){
        Inorder(r->left);
        cout<<r->val<<" ";
        Inorder(r->right);
    }
}
