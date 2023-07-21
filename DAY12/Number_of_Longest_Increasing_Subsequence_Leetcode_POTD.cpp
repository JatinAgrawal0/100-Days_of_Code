//LEETCODE POTD-------------------------------------21/07/2023

class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        int max_seq = 1;
        unordered_map<int,int> mp;
        vector<pair<int,int>> dp(nums.size());
        for(int i=0;i<nums.size();i++){
            int sub_ans = 0; //longest subsequence ending at i index
            int f = 1; // freq of the longest subsequences ending at i index
            for(int j=i-1;j>=0;j--){
                if(nums[j]<nums[i]){
                    if(sub_ans<dp[j].first){
                        sub_ans = dp[j].first;
                        f = dp[j].second; 
                    }
                    else if(sub_ans==dp[j].first) f+=dp[j].second;
                }
            }
            dp[i] = {1+sub_ans,f};
            mp[dp[i].first] += f; //adding the relevant freq in map
            max_seq = max(max_seq,dp[i].first);
        }
        return mp[max_seq];
    }
};
