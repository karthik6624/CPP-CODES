class Solution {
    bool prime(int n){
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0)return false;
        }
        return true;
    }
public:
    int diagonalPrime(vector<vector<int>>& nums) {
        int row=nums.size();
        int col=nums[0].size();
        int maxi=0;
        for(int i=0;i<row;i++){
            if(prime(nums[i][i]) and nums[i][i]>1){
                int temp=nums[i][i];
                maxi=max(temp,maxi);
            }
           
        }
         for(int i=0;i<row;i++){
         if(prime(nums[i][row-i-1]) and nums[i][row-i-1]>1){
                int temp=nums[i][row-i-1];
                maxi=max(temp,maxi);
            }
         }
            
        return maxi;
        
    }
};
