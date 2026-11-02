class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        //Previously I used a two pointer on prefix sum array but that failed because of negative numbers!!
        int count = 0;
        unordered_map<int,int> mp;

        mp[0]++;
        int prefixSum=0;
        for(int x : nums)
        {
            prefixSum+=x;
            if(mp.find(prefixSum-k)!=mp.end())
            {
                count+=mp[prefixSum-k];
            }
            mp[prefixSum]++;
        }

        return count;
        
    }
};