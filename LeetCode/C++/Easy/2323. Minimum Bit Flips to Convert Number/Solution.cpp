class Solution {
public:
    int minBitFlips(int start, int goal) {
        int cnt=0;
        int n=start^goal;
        while(n!=0){
        n=n&(n-1);
        cnt++;
        }
    return cnt;

    }
};




