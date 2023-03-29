#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bool res=binary_search(a,a+n,3);
    if(res){
        cout<<"3 is present in the array by binary search\n";
    }
    else
    {
        cout<<"3 is not present in array\n";
    }
    int index=lower_bound(a,a+n,3)-a;
    if(index<n){
        cout<<"3 is present by lower bound\n";
    }
    else
    {
        cout<<"3 is not present\n";
    }
    int x=upper_bound(a,a+n,3)-a;
    if(x<n){
        cout<<"3 is present by upper bound\n";
    }
    else
    {
        cout<<"3 is not present\n";
    }
    
}
