class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int n = nums.size();
        int ans1=0,ans2=0;
        for(int i=0;i<n;i++){
            ans1+=nums[i];
            int cur = nums[i];
            while(cur>0){
                ans2+=cur%10;
                cur/=10;
            }
        }
        if(ans1>=ans2)return ans1-ans2;
        else return ans2-ans1;
    }
};