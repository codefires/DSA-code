#include<iostream>
#include<vector>
using namespace std;
int main()
{
   class Solution {
  public:
  int f(int idx,int buy,vector<int>& prices,int limit,vector<vector<vector<int>>>& dp){
      if(idx==prices.size()) return 0;
      if(limit==0) return 0;
      int profit=0;
if(dp[idx][buy][limit]!=-1) return dp[idx][buy][limit];

      if(buy){ // agar me buy kr raha hu to ek trnsiction abhi pura nahi hua hai mtlb limit me no change aayega
  int buykrliya=(-prices[idx] + f(idx+1,0,prices,limit,dp));
  int skipkrdiya=( 0+ f(idx+1,1,prices,limit,dp));
  profit=max(buykrliya,skipkrdiya);
      }
      //agar me sell kr raha hu mtlb yaha ek transiction pura ho raha hai mtlb limit 1 se decrement hogi
      else{ // buy nahi kr skte mtlb phle ka buy kiya hua hai mtlb sell kr skte hai
        int sellkrliya=(prices[idx] + f(idx+1,1,prices,limit-1,dp));
  int skipkrdiya=( 0+ f(idx+1,0,prices,limit,dp));
  profit=max(sellkrliya,skipkrdiya);
      }
      return dp[idx][buy][limit]= profit;
  }
      int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<vector<int>>> dp(n+1,vector<vector<int>> (2,vector<int> (3,-1)));
        
          return f(0,1,prices,2,dp);
      }
  };
}