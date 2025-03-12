class Solution {
public:
    string removeOuterParentheses(string s) {
        string res = "";
        int count = 0; // Keep track of the balance of parentheses

        for (auto c : s) {
            if (c == '(') {
                if (count > 0) { // Append to result only if it's not an outer '('
                    res += c;
                }
                count++;
            } else if (c == ')') {
                count--;
                if (count > 0) { // Append to result only if it's not an outer ')'
                    res += c;
                }
            }
        }

        return res;
    }
};
