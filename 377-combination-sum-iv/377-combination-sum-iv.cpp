class Solution {
public:
    int dp[1001];
    int helper(vector<int>& nums,int target){
        if(target==0)return 1;
        if(dp[target]!=-1)return dp[target];
        int sum=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<=target){
                sum+=helper(nums,target-nums[i]);
            }
        }
        return dp[target]=sum;
    }
    int combinationSum4(vector<int>& nums, int target) {
            memset(dp,-1,sizeof(dp));
        return helper(nums,target);
    }
};