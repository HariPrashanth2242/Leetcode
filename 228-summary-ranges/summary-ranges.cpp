class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        int start = 0;

        if (nums.empty()) {
            return ans; 
        }

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i - 1] + 1) {
          
                if (start < i - 1) {
                    ans.push_back(to_string(nums[start]) + "->" + to_string(nums[i - 1]));
                } else {
                    ans.push_back(to_string(nums[start]));
                }
                start = i; 
            }
        }

        if (start < nums.size() - 1) {
            ans.push_back(to_string(nums[start]) + "->" + to_string(nums.back()));
        } else {
            ans.push_back(to_string(nums[start]));
        }

        return ans;
    }
};
