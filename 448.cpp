class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {

        //simple approach
        /*
        unordered_set<int> s;
        for(int i =0;i<nums.size();i++)
        {
            s.insert(i+1);
        }

        for(auto x : nums)
        {
            s.erase(x);
        }

        vector<int> ans(s.begin(),s.end());

        return ans;
        */
        // special marking approach for this question
        int n = nums.size();
        for(auto x:nums)
        {
            int idx = abs(x)-1;
            if(nums[idx]>0)
            {
                nums[idx]=-nums[idx];
            }
        }

        vector<int> ans;
        for(int i =0;i<n;i++)
        {
            if(nums[i]>0)
            {
                ans.push_back(i+1);
            }
        }
        return ans;
        
    }
};