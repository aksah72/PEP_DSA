class Solution {
public:
    int fun(int i,vector<int> & nums,vector<int> &dp){
        if(i>=nums.size()) return 0;
        if(dp[i] != -1) return dp[i];
        int take = nums[i]+fun(i+2,nums,dp);
        int skip = fun(i+1,nums,dp);
        return dp[i] = max(take,skip);
    }
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size(),-1);
        return fun(0,nums,dp);
    }
};