class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0,r=0, maxlen=0, maxCount=0;
        vector<int>arr(26,0);
        while(r<s.size())
        {
            arr[s[r]-'A']++;
            maxCount = max(maxCount, arr[s[r] - 'A']);
            
            while((r-l+1-maxCount)>k)
            {
                arr[s[l]-'A']--;
                maxCount=0;
                for(int i=0;i<arr.size();i++)
                {
                    maxCount=max(arr[i],maxCount);
                }
                l++;
            }
            if((r-l+1-maxCount)<=k)
            {
                maxlen= max(maxlen, r-l+1);
            }
            r++;
        }
        return maxlen;
    }
};