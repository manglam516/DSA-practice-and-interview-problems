class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int result = 0;
        unordered_set<int> s;
        for(int i =0;i<nums.size();i++)
        {
            s.insert(nums[i]);
        }

        for(auto x : s)
        {
            if(s.find(x-1)==s.end())
            {
                int curr = 1;
                while(s.find(x+curr)!=s.end())
                {
                    curr++;
                }
                result = max(result,curr);
            }
        }

        return result;
        
    }
};