#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin>>t;
   while(t--){
       int n;
       cin>>n;
       vector<int>v(n);
       for(int i=0;i<n;i++){
           cin>>v[i];
       }
       vector<int>ans(n);
       ans[0]=1;
       for(int i=1;i<n;i++){
           ans[i]=1;
           for(int j=0;j<i;j++){
               if(v[i]>v[j] and ans[i]<ans[j]+1){
                   ans[i]=ans[j]+1;
               }
           }
       }
       sort(ans.begin(),ans.end());
       cout<<ans[ans.size()-1]<<'\n';
       
       
   }
   
    return 0;
}
