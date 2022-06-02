#include <bits/stdc++.h>
using namespace std;

void merge(int arr[],int l,int mid,int h)   // This function is responsible for merging two elements or arrays by creating 2 arrays  from original array and comparing two elements and sorting them in order.
{
    int x=mid-l+1;
    int y=h-mid;
    int a[x],b[y];
    for(int i=0;i<x;i++)
    {
        a[i]=arr[l+i];
    }
    for(int i=0;i<y;i++)
    {
        b[i]=arr[mid+1+i];
    }
    
    int i=0,j=0;
    int k=l;
    while(i<x && j<y)
    {
        if(a[i]<b[j])
        {
            arr[k]=a[i];
            i++;k++;
        }
        else
        {
            arr[k]=b[j];
            j++;k++;
        }
    }
    while(i<x)           // if elements in first array are left then this code  works...
    {
        arr[k]=a[i];
        i++;k++;
    }
    while(j<y)           //if elements im second array are left then this code works..
    {
        arr[k]=b[j];
        j++;k++;
    }   
}


void mergesort(int a[],int l,int h)  {
    if(l<h)
    {
    int mid=(l+h)/2;
    mergesort(a,l,mid);
    mergesort(a,mid+1,h);
    merge(a,l,mid,h);
    }   
}


int main() {
    
    int arr[]={2,1,5,4,3};
    mergesort(arr,0,4);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}
