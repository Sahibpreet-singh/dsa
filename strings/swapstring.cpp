#include <iostream> 
#include<bits/stdc++.h>
using namespace std;
string ans(string word1,string word2){
	int n=word1.size();
	int m=word2.size();
	string ans;
	int i=0;
	int j=0;
	while(i<n&&j<m){
		ans+=word1[i];
		ans+=word2[j];
		i++;j++;
	}
	while(i<n){
		ans+=word1[i];
		i++;
	}
	while(j<m){
		ans+=word2[j];
		j++;
	}
	return ans;
}

int main() {
	string word1;
	string word2;
	
	cin>>word1;
	cin>>word2;
	cout<< ans(word1,word2);
	return 0;
}