class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size()-1;
        int ans=0;
        for(int i=0;i<=ans&&i<n;i++){
            ans=max(ans,nums[i]+i);
        }
        return ans>=n;
    } 
};