class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        /*
        int n = nums.size();
        for(int i = 0;i<n;i++)
        {
            int sq = nums[i]*nums[i];
            nums[i]=sq;
        }

        sort(nums.begin(),nums.end());

        return nums;
        */

        int n = nums.size();
        vector<int> result(n,0);
        
        int left = 0;
        int right = n-1;
        int i = n-1;

        while(left<=right)
        {
            if(abs(nums[left])>=abs(nums[right]))
            {
                result[i]=nums[left]*nums[left];
                left++;
            }
            else
            {
                result[i]=nums[right]*nums[right];
                right--;   
            }
            i--;
        }
        return result;


        
    }
};