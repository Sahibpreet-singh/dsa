class Solution {
public:
    void f(string &s,int i,string current,set<string>&st,vector<int>&dp){
        if(i==s.size()){
            if(!current.empty()){
                st.insert(current);
            }
            return;
        }
        
        f(s,i+1,current+s[i],st);
        f(s,i+1,current,st);

    }
    int distinctSubseqII(string s) {
        set<string> st;
        f(s,0,"",st);   
        return st.size();
    }
};