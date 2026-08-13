class Solution {
public:
    int maxSubArray(vector<int>& arr) {
       int n=arr.size();
        int sum=0;
        int max1=INT_MIN;
        for(int i=0;i<n;i++){
                sum+=arr[i];
            if(sum>max1){
                max1=sum;
            }
          if(sum<0){
            sum=0;
            }
      

        }

        
        return max1;
    }
};
/*class Solution {
public:
    int maxSubArray(vector<int>& nums) {
         int max = INT_MIN;
         int sum=0;
         int n= nums.size();

         for(int i=0; i<n; i++){
            sum += nums[i];
            if(sum > max){
                max = sum;
            }

            if(sum <0){
                sum =0;
            }
         }

        return max;

    }

};
*/
