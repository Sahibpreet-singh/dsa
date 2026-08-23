class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int target) {
         int n=arr.size();
        int m=arr[0].size();

        int low=0,high=n*m-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            int row=mid/m;
            int col=mid%m;
            if(arr[row][col]==target){
                return true;
            }
            else if(arr[row][col]<target){
                low=mid+1;
            }
            else high=mid-1;
       
        }
        
        return false;
    }
};