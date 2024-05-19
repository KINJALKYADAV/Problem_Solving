class Solution {
public:
    int ans(vector<int>& nums, int goal)
    {
        if(goal<0)
            return 0;
       int l=0,r=0;
       int sum=0;
       int c=0;
       while(r<nums.size())
       {
           sum=sum+nums[r];    
            while(sum > goal )
            {
                sum=sum-nums[l];
                l++;
            }
            c=c+r-l+1;
            r++;
       } 
       return c;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return ans(nums, goal)-ans(nums,goal-1);
    }
};