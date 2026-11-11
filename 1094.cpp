class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        //SOLVED IT IN FIRST TRY WITHOUT ANY HELP

        vector<int> diff(1002,0);
        for(auto& t : trips)
        {
            int pick = t[1];
            int drop = t[2];
            int passengers=t[0];

            diff[pick]+=passengers;
            diff[drop]-=passengers;
        }
        int total=0;
        for(auto x : diff)
        {
            total+=x;
            if(total>capacity)
            {
                return false;
            }
        }

        return true;

        
    }
};