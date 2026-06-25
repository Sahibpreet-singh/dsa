// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
//[2,4,5,-1,-3,-4]
int f(vector<int>arr,int n){
    if(n<=0)return 0;
   
    int jump=f(arr,n-1)+abs(arr[n]-arr[n-1]);
   int notjump;
    if(n>1){
        ntake=f(arr,n-2)+abs(arr[n]-arr[n-2]);
    }
    return min(take,ntake);
        
}

int main() {
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<f(arr,n-1);  
    
    return 0;
}