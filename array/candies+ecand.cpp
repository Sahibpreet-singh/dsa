#include <iostream> 
#include <bits/stdc++.h>
using namespace std;
int maxii(vector<int>arr,int n){
	int max=INT_MIN;
	for(int i=0;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	return max;
}
vector<bool> ans1(vector<int>arr,int ecand,int n){
	int maxi=maxii(arr,n);
	vector<bool>ans;
	for(int i=0;i<n;i++){
		if(arr[i]+ecand>=maxi){ans.push_back(true);}
		else{
			ans.push_back(false);
		}
	}
	return ans;
}

int main() {
	int n;
	int ecand;
	cin>>n>>ecand;

	vector<int>candies(n);
	for(int i=0;i<n;i++){
		cin>>candies[i];
	}
	
	vector<bool>final;
	final=ans1(candies,ecand,n);
	cout<<boolalpha;
	for(int i=0;i<n;i++){
		cout<<final[i]<<" ";
	}
	return 0;
}