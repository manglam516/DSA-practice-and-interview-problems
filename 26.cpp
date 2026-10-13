class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

       /* for(int i = 0;i<nums.size();i++)
        {
            while( (i+1)!=nums.size() &&nums[i]==nums[i+1])
            {
                nums.erase(nums.begin()+i+1);
            }
        }

        return nums.size();
        */

        int n= nums.size();
        int i=0;
        for(int j=1;j<n;j++)
        {
            if(nums[i]!=nums[j])
            {
                i++;
                nums[i]=nums[j];
            }
        }

        return i+1;
        
    }
};