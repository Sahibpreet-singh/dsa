class Solution {
public:
    string reverseParentheses(string s) {
        stack<int> openParenthesesIndices;
        string result;
        for (char currentChar : s) {
            if (currentChar == '(') {
                // Store the current length as the start index for future
                // reversal
                openParenthesesIndices.push(result.length());
            } else if (currentChar == ')') {
                int start = openParenthesesIndices.top();
                openParenthesesIndices.pop();
                // Reverse the substring between the matching parentheses
                reverse(result.begin() + start, result.end());
            } else {
                // Append non-parenthesis characters to the processed string
                result += currentChar;
            }
        }
        return result;
    }
};