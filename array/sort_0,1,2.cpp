#include <iostream> 
#include <bits/stdc++.h>
using namespace std;
void s012(vector<int> &arr,int n){
	int low,mid,high;
	low=0;high=n-1;
	mid=0;
	while(mid<=high){
		if(arr[mid]==0){
			swap(arr[low],arr[mid]);
			mid++;
			low++;
		}
		else if(arr[mid]==1){
			mid++;
		}
		else{
			swap(arr[mid],arr[high]);
			high--;
		}
	}

}

int main() {
	int n;
	cin>>n;
	vector<int>arr(n);
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	s012(arr,n);
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}

	return 0;
}