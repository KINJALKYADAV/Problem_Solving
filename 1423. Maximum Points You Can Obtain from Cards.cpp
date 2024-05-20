class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        
        int maxi=0;
        int n= cardPoints.size();
        int lsum=0;
        for(int i=0;i<k;i++)
        {
            lsum+=cardPoints[i];
        }
        maxi=lsum;
        int rsum=0;
        int right=n-1;
        for(int i=k-1;i>=0;i--)
        {
            lsum-=cardPoints[i];
            rsum+=cardPoints[right];
            right--;
            maxi= max(maxi, lsum+rsum);
        }
        return maxi;
    }
};