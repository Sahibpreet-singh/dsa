class Solution {
public:
    vector<vector<int>> subsets(vector<int>& arr) {
        int n=arr.size();
        vector<vector<int>> ans;
        for(int i=0;i<(1<<n);i++){
                vector<int>ans1;
                for(int j=0;j<n;j++){
                    if(i&(1<<j)){
                        ans1.push_back(arr[j]);
                    }
                }
        ans.push_back(ans1);
        }
      
return ans;



    }
};