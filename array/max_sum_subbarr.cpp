// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int ans(vector<int>arr,int k,int n){
   
    int maxi=0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<i+k;j++){
            sum+=arr[j];
            if(maxi<sum){
                maxi=sum;
            }
        }
    }
    return maxi;
}
        
int main() {
   int n,k;
   cin>>n>>k;
   vector<int>arr(n);
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
    cout<<ans(arr,k,n);

    return 0;
}