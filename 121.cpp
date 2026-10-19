class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // TLE on brute force
       /* int profit = 0;
        for(int i=0;i<(prices.size()-1);i++)
        {
            for(int j=i+1;j<prices.size();j++)
            {
                int curr = prices[j]-prices[i];
                profit = max(profit,curr);            }
            }
           
        return profit;
        */

        int profit = 0;
        int lowest = prices[0];
        for(int i = 1;i<prices.size();i++)
        {
            lowest = min(prices[i],lowest);
            profit = max(profit,(prices[i]-lowest));
        }

        return profit;




    }
};