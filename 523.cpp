class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {

        int prevprefix=0;
        int prefix=0;
        unordered_set<int> s;

        for(auto x : nums)
        {
            prefix+=x;
            if(s.find(prefix%k)!=s.end())
            {
                return true;
            }
            s.insert(prevprefix%k);
            prevprefix=prefix%k;

        }
        return false;

                
    }
};