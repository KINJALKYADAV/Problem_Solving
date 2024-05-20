class Solution {
public:
    int numberOfSubstrings(string s) {
        int l=0,r=0;
        int c=0;
        int n=s.size();
        if(n==0)
            return 0;
        vector<int>arr(3,0);
        while(r<s.length())
        {
            arr[s[r]-'a']++;
            while(arr[0]>=1 && arr[1]>=1 && arr[2]>=1)
            {
                c=c+n-r;
                
                arr[s[l]-'a']--;
                l++;
            }
            r++;
        }
        return c;
    }
};