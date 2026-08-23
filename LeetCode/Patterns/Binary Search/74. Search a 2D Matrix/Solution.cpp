class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int target) {
        int n=arr.size();
        int m=arr[0].size();
        int low=0;
        int high=n*m-1;
        
        while(low<=high){
            int mid=(low+high)/2;
            int rows=mid/m;
            int colm=mid%m;
            if(arr[rows][colm]==target){return true;}
            else if(arr[rows][colm]<target)low=mid+1;
            else high=mid-1;

        }

    return false;
    }
};