class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};  // base case

        unordered_map<char,string> mpp;
        mpp['2'] = "abc";
        mpp['3'] = "def";
        mpp['4'] = "ghi";
        mpp['5'] = "jkl";
        mpp['6'] = "mno";
        mpp['7'] = "pqrs";
        mpp['8'] = "tuv";
        mpp['9'] = "wxyz";

        vector<string> ans;
        helper(digits, mpp, "", 0, ans);
        return ans;
    }

    void helper(string& digits, unordered_map<char,string>& mpp, string up, int index, vector<string>& ans) {
        if(index == digits.size()) {
            ans.push_back(up);
            return;
        }

        char digit = digits[index];
        string letters = mpp[digit];

        for(char ch : letters) {
            helper(digits, mpp, up + ch, index + 1, ans);
        }
    }
};
