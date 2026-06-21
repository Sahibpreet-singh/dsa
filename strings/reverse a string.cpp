#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void ans(string s, int n) {
    vector<string> ans;
    string temp = "";

    for(int i = 0; i < n; i++) {
        if(s[i] != ' ') {
            temp += s[i];
        }
        else {
            if(temp != "") {
                ans.push_back(temp);
                temp = "";
            }
        }
    }

    if(temp != "") {
        ans.push_back(temp);
    }

    string ans1 = "";

    for(int i = 0; i < ans.size(); i++) {
        ans1 += ans[i];
        if(i != ans.size() - 1) {
            ans1 += " ";
        }
    }

    cout << ans1;
}

int main() {
    string s;
    getline(cin, s);

    ans(s, s.size());

    return 0;
}