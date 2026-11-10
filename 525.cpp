class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        //prefix calculation, current for keeping index, map is <prefix,its index> as key,value pair
        //always keeping the index of  first encounter with that prefix for longest length of subarray
        int count = 0;
        unordered_map<int,int> mp;
        mp[0]=0;
        int current = 1;
        int prefix = 0;

        for(auto x : nums)
        {
            if(x==0) prefix-=1;
            else prefix+=1;
            if(mp.find(prefix)!=mp.end())
            {
                count=max(count,current-mp[prefix]);

            }
            else
            {
                mp[prefix]=current;
            }
            current++;
            
        }
        return count;
        
    }
};