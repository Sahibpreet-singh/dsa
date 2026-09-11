class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        sort(digits.begin(), digits.end());

        int ans = 0;

        do {
            // First digit cannot be 0
            if (digits[0] == 0)
                continue;

            // Last digit must be even
            if (digits[2] % 2 == 0)
                ans++;

        } while (next_permutation(digits.begin(), digits.end()));

        return ans;
    }
};