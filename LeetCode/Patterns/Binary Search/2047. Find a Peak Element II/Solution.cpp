class Solution {
public:
    int maxele(vector<vector<int>>arr,int n,int m,int col){
        int max=-1;
        int ind=-1;
        for(int i=0;i<n;i++){
            if(max<arr[i][col]){
                max=arr[i][col];
                ind=i;
            }
        }
    return ind;

    }
    vector<int> findPeakGrid(vector<vector<int>>& arr) {
        
        int n=arr.size();
        int m=arr[0].size();
        int low=0;int high=m-1;
        while(low<=high){
            int mid=(low+high)/2;
            int rows=maxele(arr,n,m,mid);
            int left=mid-1>=0?arr[rows][mid-1]:-1;
            int right=mid+1<m?arr[rows][mid+1]:-1;
            if(arr[rows][mid]>left&&arr[rows][mid]>right){
                return {rows,mid};
            }
            else if(arr[rows][mid]<left) high=mid-1;     
        else low=mid+1;
       
        }
    return {-1,-1};

    }
};