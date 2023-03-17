#include<bits/stdc++.h>
using namespace std;

class BSTNode{
    public:
    int val;
    BSTNode *left,*right;
    BSTNode(int v){
        val=v;
        left=right=NULL;
    } 
};

BSTNode *insertNode(BSTNode *r,int v){
    if(r==NULL)
     return new BSTNode(v);
    if(v<=r->val){
        r->left=insertNode(r->left,v);
    }
    else
    {
          r->right=insertNode(r->right,v);
    }
    return r;
}

int main(){
     BSTNode *r=NULL;
      int x;cin>>x;
        r=insertNode(r,x);
}
