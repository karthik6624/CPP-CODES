void permutations(vector<int>&ds,vector<int>&nums,vector<vector<int>>&ans,int freq[]){
    if(ds.size()==nums.size()){
    ans.push_back(ds);
    return ;
    }
    for(int i=0;i<nums.size();i++){
        if(!freq[i]){
            ds.push_back(nums[i]);
            freq[i]=1;
            permutations(ds,nums,ans,freq);
            freq[i]=0;
            ds.pop_back();
        }
    }
}