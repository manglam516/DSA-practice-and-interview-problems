class Solution {
public:
    int findTheLongestSubstring(string s) {

        int mask = 0;
        unordered_map<int,int> mp;
        int size=0;
        int current=1;
        mp[0]=0;
        
        for(auto x : s)
        {
            if(x=='a') mask^=1<<4;
            if(x=='e') mask^=1<<3;
            if(x=='i') mask^=1<<2;
            if(x=='o') mask^=1<<1;
            if(x=='u') mask^=1<<0;

            if(mp.find(mask)!=mp.end())
            {
                size=max(size,current-mp[mask]);
            }
            else
            {
                mp[mask]=current;
            }
            current++;
        }

        return size;
        
    }
};