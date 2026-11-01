class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // TLE ON NAIVE APPROACH 
        /*
        vector<vector<string>> ans;
        unordered_set<string> s;
        
        for(int i =0;i<strs.size();i++)
        {
            string value = strs[i];
            sort(value.begin(),value.end());
            if(s.find(value)==s.end())
            {
               vector<string> current;
               current.push_back(strs[i]);
               for(int j =i+1;j<strs.size();j++)
                  {
                    string curr = strs[j];
                    sort(curr.begin(),curr.end());
                    if(value==curr)
                    {
                        current.push_back(strs[j]);
                    }
                  }
                ans.push_back(current);
                s.insert(value); 
            }
        }
        return ans;
    */
    // Better approach - using hashing over the key value pair.
    vector<vector<string>> ans;
    unordered_map<string, vector<string>> mp;
    for(auto s : strs)
    {
        string key = s;
        sort(key.begin(),key.end());
        mp[key].push_back(s);
    }

    for( auto m : mp)
    {
        ans.push_back(m.second);
    }
    return ans;

        
    }
};