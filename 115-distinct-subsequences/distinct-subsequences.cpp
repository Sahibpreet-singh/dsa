class Solution {
public:
    int f(string &s,string &t,int i,int j,vector<vector<int>>&dp){
        if(j==t.size()) return 1;
        if(i==s.size()) return 0;
        if (dp[i][j] != -1) return dp[i][j];
        
        if(s[i]==t[j]){
            int take=f(s,t,i+1,j+1,dp);
            int ntake=f(s,t,i+1,j,dp);
            return dp[i][j]=take+ntake;
        }
        return dp[i][j]=f(s,t,i+1,j,dp);
    }
    int numDistinct(string s, string t) {
        int n=s.size();
        int m=t.size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return f(s,t,0,0,dp);
    }
};