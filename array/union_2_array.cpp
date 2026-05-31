class Solution {
public:
    vector<int> unionArray(vector<int>& arr1, vector<int>& arr2) {

        vector<int> ans;
        int left = 0;
        int right = 0;
        int n = arr1.size();
        int m = arr2.size();

        while(left < n && right < m) {

            if(arr1[left] < arr2[right]) {
                if(ans.empty() || ans.back() != arr1[left])
                    ans.push_back(arr1[left]);
                left++;
            }

            else if(arr1[left] > arr2[right]) {
                if(ans.empty() || ans.back() != arr2[right])
                    ans.push_back(arr2[right]);
                right++;
            }

            else {
                if(ans.empty() || ans.back() != arr1[left])
                    ans.push_back(arr1[left]);
                left++;
                right++;
            }
        }

        while(left < n) {
            if(ans.empty() || ans.back() != arr1[left])
                ans.push_back(arr1[left]);
            left++;
        }

        while(right < m) {
            if(ans.empty() || ans.back() != arr2[right])
                ans.push_back(arr2[right]);
            right++;
        }

        return ans;
    }
};