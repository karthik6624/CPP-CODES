
long long maximumsubarraysum(int arr[],int n){
    long long sum=0,maxi=LONG_MIN;
    int start,ansstart,ansend;
    for(int i=0;i<n;i++){
        if(sum==0)
        start=i;
        sum+=arr[i];
        if(sum>maxi)
        {
            maxi=sum;
            ansstart=start; // This gives starting index of the maximum sub array
            ansend=i;       // This gives ending index of the maximum sub array
        }
        if(sum<0)sum=0;
    }
    if(maxi<0)maxi=0;
    return maxi;
}
