class Solution {
public:
//dsa
    void reverseString(vector<char>& s) {
        int n=s.size();
        int low=0;int high=n-1;
        while(low<=high){
            swap(s[low],s[high]); 
            low++;
            high--;
        }

    }
};