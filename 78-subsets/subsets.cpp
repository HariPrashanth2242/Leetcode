class Solution {
public:
    vector<vector<int>> ans;

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> current;
        helper(current, nums);
        return ans;
    }

    void helper(vector<int>& a, vector<int> b) {

        ans.push_back(a);

        for (int i = 0; i < b.size(); ++i) {
            int z = b[i];

            a.push_back(z);


            vector<int> new_b(b.begin() + i + 1, b.end());


            helper(a, new_b);


            a.pop_back();
        }
    }
};
