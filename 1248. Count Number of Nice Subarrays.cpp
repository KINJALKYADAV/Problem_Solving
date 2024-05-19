class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int l=0,r=0, odd=0;
        int c=0;
        while(r<nums.size())
        {
            if((nums[r]&1)!=0)
            {
                odd++;
            }
            if(odd==k)
            {
                c++;
            }
            while(odd>=k)
            {
                if((nums[l]&1)!=0)
                {
                    odd--;
                }
                l++;
                if(odd==k)
                    c++;
            }
            r++;
        }
        return c;
    }
};