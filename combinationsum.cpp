#include<bits/stdc++.h>
using namespace std;



void find(int ind, int k, vector<int>& arr, vector<vector<int>> &ans, vector<int>& ds){
    if(ind==arr.size()){
        if(k==0) 
		ans.push_back(ds);
        return;
    }
    if(arr[ind]<=k)
    {
        ds.push_back(arr[ind]);
        find(ind, k-arr[ind], arr, ans, ds);
        ds.pop_back();
}
 find(ind+1, k, arr, ans, ds);
}

int main(){
    vector<int>arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    int k=6;
    vector<vector<int>>ans;
    vector<int>ds;
    find(0,k,arr,ans,ds);
    for(auto i:ans){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<'\n';
    }
    #include<bits/stdc++.h>
using namespace std;



void find(int ind, int k, vector<int>& arr, vector<vector<int>>& ans, vector<int>& ds){
    if(ind==arr.size()){
        if(k==0) ans.push_back(ds);
        return;
    }
    if(arr[ind]<=k)
    {
        ds.push_back(arr[ind]);
        find(ind, k-arr[ind], arr, ans, ds);
        ds.pop_back();
}
 find(ind+1, k, arr, ans, ds);
}

int main(){
    vector<int>arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    int k=6;
    vector<vector<int>>ans;
    vector<int>ds;
    find(0,k,arr,ans,ds);
    for(auto i:ans){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<'\n';
    }
    
}