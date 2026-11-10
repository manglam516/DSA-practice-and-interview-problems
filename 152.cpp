class Solution {
public:
    int maxProduct(vector<int>& nums) {
        //Basic idea, if we multiply with a negative number, the maximum becomes the minimum and the minimum becomes the maximum, so maintain both. Also at every number we have two choices, either start a subarray from that element, of include it to the previous calculations.
        int currmin = nums[0];
        int currmax = nums[0];
        int result = nums[0];

        for(int i =1;i<nums.size();i++)
        {
            if(nums[i]<0) swap(currmin,currmax);

            currmax=max(nums[i],nums[i]*currmax);
            currmin=min(nums[i],nums[i]*currmin);

            result = max(result,currmax);
        }

        return result;

        
    }
};