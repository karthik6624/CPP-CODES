#include<bits/stdc++.h>
using namespace std;


void subseq(vector<int>&v,vector<int>&ds,int n,int index){
    
    if(index==n){
        for(int i=0;i<ds.size();i++){
            cout<<ds[i]<<" ";
        }
        cout<<"\n";
        return;
    }
    ds.push_back(v[index]);
    subseq(v,ds,n,index+1);
    ds.pop_back();
    subseq(v,ds,n,index+1);
    
    
}

int main(){
    vector<int>v;
    int n=3;
    for(int i=0;i<3;i++){
        int x;cin>>x;
        v.push_back(x);
    }
    vector<int>ds;
    subseq(v,ds,n,0);
}
