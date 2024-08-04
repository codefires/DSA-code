    //https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/submissions/1312552237/
    class Solution {
    public:
    int Tabulation(vector<int>& prices){
    int n = prices.size();
    vector<vector<int>> dp(n+1,vector<int>(2,0));
    //iske and reverse traversal krte hai
    for(int i=n-1;i>=0;i--){
        for(int buy=1;buy>=0;buy--){
            int profit=0;
       if(buy){
    int buykrliya=(-prices[i] + dp[i+1][0]);
    int skipkrdiya=( 0+ dp[i+1][1]);
    profit=max(buykrliya,skipkrdiya);
    }
    else{ // buy nahi kr skte mtlb phle ka buy kiya hua hai mtlb sell kr skte hai
        int sellkrliya=(prices[i] + dp[i+1][1]);
    int skipkrdiya=( 0+ dp[i+1][0]);
    profit=max(sellkrliya,skipkrdiya);
    }
dp[i][buy]=profit;
        }
    }
    return dp[0][1];
    }
    int maxProfit(vector<int>& prices) {
     
        return Tabulation(prices);
    }
    };