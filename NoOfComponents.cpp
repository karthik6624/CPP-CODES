#include<bits/stdc++.h>
using namespace std;


void dfs(vector<vector<int>>&a,int s,vector<bool>&visited){
    if(visited[s]==true){
    return;
    }
    visited[s]=true;
    for(auto ns:a[s]){
        dfs(a,ns,visited);
    }
}


int main(){
   int t;
   cin>>t;
   while(t--){
       int n,e;
       cin>>n>>e;
       vector<bool>visited(n+1,false);
       vector<vector<int>>a(n+1);
       for(int i=1;i<=e;i++){
           int u,v;
           cin>>u>>v;
           a[u].push_back(v);
           a[v].push_back(u);
       }
       int c=0;
       for(int i=1;i<=n;i++){
           if(visited[i]==false){
               dfs(a,i,visited);
               c++;
           }
       }
       cout<<c<<"\n";
   }
    return 0;
}
