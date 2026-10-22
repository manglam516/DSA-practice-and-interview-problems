class Solution {
public:
    int minOperations(vector<int>& nums, int x) {

        int total = accumulate(nums.begin(),nums.end(),0);
        int left = 0;
        int right;
        int maxi = -1;
        int current =0;

        if(total-x<0) return -1;

        for(right = 0;right<nums.size();right++)
        {
            current +=nums[right];

            while(current>total-x)
            {
                current-=nums[left];
                left++;
            }
            if(current==total-x)
            {
                maxi=max(maxi,right-left+1);
            }

        }
        if(maxi==-1) return maxi;
        else
        {
        return (nums.size()-maxi);
        }
        
    }
};