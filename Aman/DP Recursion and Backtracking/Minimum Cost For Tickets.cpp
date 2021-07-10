class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int n=days.size();
        unordered_map<int,int>dp;
        int prev7=0,prev30=0;
        for(int i=0;i<=n;i++)
        {   
           while(days[i]-days[prev7]>=7)prev7++;
           while(days[i]-days[prev30]>=30)prev30++;
            
            dp[i]=min({dp[i-1]+costs[0],dp[prev7-1]+costs[1],dp[prev30-1]+costs[2]});
        }
        return dp[n-1];
    }
};
