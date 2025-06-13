class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> path;
        generate(s, 0, 0, path, ans);
        return ans;
    }

    void generate(string& s, int start, int end, vector<string>& path, vector<vector<string>>& ans) {
        if (end == s.size()) {
            if (start == s.size()) {
                ans.push_back(path);
            }
            return;
        }

        if (isPalindrome(s, start, end)) {
            path.push_back(s.substr(start, end - start + 1));
            generate(s, end + 1, end + 1, path, ans);
            path.pop_back();  
        }
        generate(s, start, end + 1, path, ans);
    }

    bool isPalindrome(const string& s, int left, int right) {
        while (left < right) {
            if (s[left++] != s[right--]) return false;
        }
        return true;
    }
};
