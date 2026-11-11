class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {

        int n = nums.size();
        for(int i = 0;i<n;i++)
        {
            if(nums[i]==0) nums[i]=INT_MAX;
        }

        for(int i =0;i<n;)
        {
            if(nums[i]<=n && nums[i]>0)
            {
                int idx = nums[i]-1;
                if(nums[idx]!=0)
                {
                    swap(nums[i],nums[idx]);
                    nums[idx]=0;
                }
                else
                {
                    i++;
                }
            }
            else
            {
                i++;
            }
        }
        int i;
        for( i =0;i<n;i++)
        {
            if(nums[i]!=0) return i+1;
        }
        return i+1;
        
    }
};