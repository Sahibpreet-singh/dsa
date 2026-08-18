class Solution {
public:
  bool func(vector<int>arr,int n,int days,int k,int m){
    int noob=0;int cnt=0;
    for(int i=0;i<n;i++){
        if(arr[i]<=days){
            cnt++;
        }
        else{
            noob+=cnt/k;
            cnt=0;
        }

    }
    noob+=cnt/k;
    return noob>=m;
  }
  
  
    int minDays(vector<int>& arr, int m, int k) {
      long long val = m * 1ll * k * 1ll;
     //size of the array
        int n=arr.size();
    if (val > n) return -1;
        int low=*min_element(arr.begin(),arr.end());
        int high=*max_element(arr.begin(),arr.end());
       while(low<=high){
        int mid=(low+high)/2;
        if(func(arr,n,mid,k,m)){
            high=mid-1;
        }
        else{
            low=mid+1;
        }

       }
        
    return low;


    }
};