#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

vector<long long> genrow(long long r){

	long long ans=1;
	vector<long long>ansRow;
	ansRow.push_back(1);
	for(long long col=0;col<r;col++){
		ans=ans*(r-col);
		ans=ans/col;
		ansRow.push_back(ans);
	}
	return ansRow;

}

int main() {
	long long n,c,r;
	cin>>n>>r>>c;
	vector<long long>ans1;
	ans1=genrow(r);
	cout<<ans1[c-1]<<endl;
	for(auto it:ans1){
		cout<<it<<" ";
	}
	cout<<endl;
	for(long long i=1;i<=n;i++){
		vector<long long>row=genrow(i);
		for(auto it:row){
			cout<<it<<" ";
		}
		cout<<endl;
	}	
	return 0;
}