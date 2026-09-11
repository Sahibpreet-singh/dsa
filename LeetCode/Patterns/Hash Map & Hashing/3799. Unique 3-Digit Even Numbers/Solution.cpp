class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        sort(digits.begin(), digits.end());
        int ans = 0;
        do {
            if (digits[0] == 0)
                continue;
            if (digits[2] % 2 == 0)
                ans++; 
        } while (next_permutation(digits.begin(), digits.end()));

        return ans;
    }
};