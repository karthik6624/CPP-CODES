#include<bits/stdc++.h>
using namespace std;


void subseq(vector<int>&v,vector<int>&ds,int n,int index,int k){
    
    if(index==n){
        int x=accumulate(ds.begin(),ds.end(),0);
        if(x==k){
        for(int i=0;i<ds.size();i++){
            cout<<ds[i]<<" ";
        }
        cout<<"\n";
        }
        return;
    }
    ds.push_back(v[index]);
    subseq(v,ds,n,index+1,k);
    ds.pop_back();
    subseq(v,ds,n,index+1,k);
    
    
}

int main(){
    vector<int>v;
    int n=3;
    for(int i=0;i<3;i++){
        int x;cin>>x;
        v.push_back(x);
    }
    int k;cin>>k;
    vector<int>ds;
    subseq(v,ds,n,0,k);
}
