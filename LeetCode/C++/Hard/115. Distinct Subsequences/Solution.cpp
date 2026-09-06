class Solution {
public:
    int f(string &s,string &t,int i,int j){
        if(j==t.size()) return 1;
        if(i==s.size()) return 0;

        if(s[i]==t[j]){
            int take=f(s,t,i+1,j+1);
            int ntake=f(s,t,i+1,j);
            return take+ntake;
        }
        return f(s,t,i+1,j);
    }
    int numDistinct(string s, string t) {
        int n=s.size();
        int m=t.size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return f(s,t,0,0);
    }
};