class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //[7,1,5,3,6,4]
        int minPrice = prices[0]; //7
        int maxProfit = 0;
        // int profit = 0;

        for(int i=1; i<prices.size(); i++){
           int profit = prices[i] - minPrice;

            maxProfit = max(maxProfit , profit);

            minPrice= min(minPrice ,prices[i]);
        }  
        return maxProfit; 

        //Time complexity - O(n) S.C - O(1);
        
    }
};