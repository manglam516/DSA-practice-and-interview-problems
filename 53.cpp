class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // Divide and Conquer Approach
        /*
        if(nums.size()==1)
        {
            return nums[0];
        }

        int left = 0;
        int right = nums.size()-1;
        int result = subarray(nums,left,right);

        
        return result;

        
    }

    int subarray(vector<int>& nums,int left,int right)
    {

        if(left==right) return nums[left]; //base case(array of size 1)
        int mid = (left+right)/2;
        int l = subarray(nums, left, mid);  //maximum from left subarray
        int r = subarray(nums,mid+1,right);  //maximum from right subarray


        //maximum at the crossing
        
        int leftsum = INT_MIN, rightsum=INT_MIN;
        int sum=0;
        for(int i=mid;i>=left;i--)
        {
            sum+=nums[i];
            leftsum=max(leftsum,sum);
        }
        sum=0;
        for(int i=mid+1;i<=right;i++)
        {
            sum+=nums[i];
            rightsum=max(rightsum,sum);
        }
        int cross = leftsum+rightsum;

        return max({cross,l,r});
        */


        //Kadane's Algorithm (GREEDY ONE PASS)

       /* int size = nums.size();
        int result = INT_MIN;
        int curr = 0;
        for(int i=0;i<size;i++)
        {
            curr+=nums[i];
            result=max(result,curr);

            if(curr<0) curr=0;
        }

        return result;
        */

        //Prefix Sum Approach( GREEDY ONE PASS )

        int size = nums.size();
        int prefix=0;
        int minprefix=0;
        int result=INT_MIN;
        for(int i=0;i<size;i++)
        {
            prefix+=nums[i];
            result = max(result,prefix-minprefix);

            minprefix = min(minprefix,prefix);

        }

        return result;
    }

    
};