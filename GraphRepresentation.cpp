#include<bits/stdc++.h>
using namespace std;
//vector<vector<int>>al(10010);
void printtheorder(vector<vector<int>>&al,int n){
   for(int i=1;i<=n;i++){
       sort(al[i].begin(),al[i].end());
   }
    for(int i=1;i<=n;i++){
        cout<<i<<" : ";
        for(auto j:al[i]){
            cout<<j<<" ";
        }
        cout<<"\n";
    }
    
}

int  main(){
   // vector<vector<int>>al(10010);
    // int n,e;
    // cin>>n>>e;
    while(true){
         vector<vector<int>>al(10010);
        int n,e;
        cin>>n>>e;
         if(n==e && n==-1)
        {
            return 0;
        }
        while(e--){
        int x,y;
        cin>>x>>y;
        // if(n==e && n==-1)
        // {
        //     return 0;
        // }
        al[x].push_back(y);
        al[y].push_back(x);
    }
    printtheorder(al,n);
    cout<<"\n";
    }
    //main();
}
