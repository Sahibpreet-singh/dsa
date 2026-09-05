class Solution {
public:
    int firstStableIndex(vector<int>& arr, int k) {
        int n=arr.size();
        
        vector<int>prefix(n);
        vector<int>suffix(n);
        prefix[0] = arr[0];
        suffix[n - 1] = arr[n - 1];
        for(int i=1;i<n;i++){
            prefix[i]=max(prefix[i-1],arr[i]);
            suffix[n-i-1]=min(suffix[n-i],arr[n-i-1]);

        }
         for (int i = 0; i < n; i++) {
            if (prefix[i] - suffix[i] <= k) {
                return i;
                }     
            }
        return -1;
    
    }
};