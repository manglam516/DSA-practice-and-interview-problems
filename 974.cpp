class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {

        int count =0;
        unordered_map<int,int> mp;
        mp[0]++;
        int prefix=0;
        for(auto x : nums)
        {
            prefix+=x;
            
            int rem = ((prefix % k) + k) % k; //normalisation in the range 0->(k-1)

            count += mp[rem];

            mp[rem]++;
        }

        return count;
        
    }
};