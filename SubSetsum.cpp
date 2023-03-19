void func(int index,int sum,vector<int>&v,int n,vector<int>&subsetsum){
    if(index==n){
        subsetsum.push_back(sum);
        return ;
    }
    func(index+1,,sum+v[i],v,n,subsetsum);
    func(index+1,sum,v,n,subsetsum);
}
