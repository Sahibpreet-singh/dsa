class Solution {
public:
    int maxPalindromes(string s, int k) {
        int n = s.size(), lastEnd = 0, count = 0;

        for (int center = 0; center < 2 * n; center++) {
            int left = center / 2;
            int right = left + center % 2;

            while (left >= 0 && right < n && s[left] == s[right]) {
                if (right - left + 1 >= k) {
                    int end = right + 1;

                    if (left >= lastEnd)
                        lastEnd = end, count++;
                    else
                        lastEnd = min(lastEnd, end);

                    break;
                }
                left--, right++;
            }
        }

        return count;
    }
};