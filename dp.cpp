class Solution {
public:
int min(int a,int b)
{
    if(a<b)
    return a;
    return b;
}
int mcost(int n,vector<int>& cost,vector<int> &dp)
{
    if(n==0)
    return cost[0];

    if(n==1)
    return cost[1];

    if(dp[n]!=-1)
    {
        return dp[n];
    }

    
    dp[n]= (cost[n]+min(mcost(n-1,cost,dp),mcost(n-2,cost,dp)));
    return dp[n];
}
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int> dp(n+1,-1);
        int ans=min(mcost(n-1,cost,dp),mcost(n-2,cost,dp));
        return ans;
        
    }
};