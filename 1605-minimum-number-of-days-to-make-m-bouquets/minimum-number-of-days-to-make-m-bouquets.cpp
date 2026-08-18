class Solution {
public:
    bool possible(vector<int> &nums, int day, int m, int k) {
        int n = nums.size(); 
        
        // Count of flowers bloomed
        int cnt = 0; 
        
        // Count of bouquets formed
        int noOfB = 0; 

        // Count number of bouquets that can be formed
        for (int i = 0; i < n; i++) {
            if (nums[i] <= day) {
                // Increment flower count
                cnt++; 
            } else {
                /* Calculate number of bouquets
                formed with flowers <= day */
                noOfB += (cnt / k);
                
                // Reset flower count
                cnt = 0; 
            }
        }
        // Add remaining flowers as a bouquet
        noOfB += (cnt / k); 

        /* Return true if enough 
        bouquets can be formed */
        return noOfB >= m; 
    }
   
    int minDays(vector<int>& nums, int m, int k) {
        int n=nums.size();
        long long val = m * 1ll * k * 1ll; 
        
        if (val > n) return -1; 
        
        int mini = INT_MAX, maxi = INT_MIN;
        for (int i = 0; i < n; i++) {
            mini = min(mini, nums[i]); 
            maxi = max(maxi, nums[i]); 
        }
        
        int left = mini, right = maxi, ans = -1;
        while (left <= right) {
            
            int mid = left + (right - left) / 2; 
            
            if (possible(nums, mid, m, k)) {
                 
                
                right = mid - 1; 
            } else {
                left = mid + 1; 
            }
        }
        return left; 
    }
};