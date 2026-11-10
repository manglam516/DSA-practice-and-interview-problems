class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int total=0;
        int currmax=0;
        int currmin=0;
        int maxsum=INT_MIN;
        int minsum=INT_MAX;

        for(auto x : nums)
        {
            currmax=max(x,currmax+x);
            currmin=min(x,currmin+x);
            maxsum=max(maxsum,currmax);
            minsum=min(minsum,currmin);
            total+=x;
        }

        if(maxsum<0)
        {
            return maxsum;
        }

        return max(total-minsum,maxsum);
        
    }
};