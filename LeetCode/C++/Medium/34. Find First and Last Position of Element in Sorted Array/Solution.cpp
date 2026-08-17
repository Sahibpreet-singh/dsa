class Solution {
public:
  
   int ceil(vector<int> arr,int low,int high,int target){
       
       int ans=-1;
    while(low<=high){
    int mid=(low+high)/2;
        if(arr[mid]<=target){
            ans=mid;
            low=mid+1;}
        else{high=mid-1;}
    
   }
        return ans;
   }
    
   int flo(vector<int> arr,int low,int high,int target){
       
       int ans=-1;
    while(low<=high){
    int mid=(low+high)/2;
        if(arr[mid]>=target){
            ans=mid;
            high=mid-1;}
        else{low=mid+1;}
    
   }
        return ans;
   }


    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int n=nums.size();
        int low=0;int high=n-1;
        int j=ceil(nums,low,high,target);
        int k=flo(nums,low,high,target);
        if(k==-1||nums[k]!=target)return {-1,-1};
        ans.push_back(k);
        ans.push_back(j);



    return ans;}
    };
   
        