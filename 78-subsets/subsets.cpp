class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> comb;
        generate(nums,0,comb,ans);
        return ans;
    }

    void generate(vector<int> &nums,int index, vector<int> &comb,vector<vector<int>> &ans){
        if(index==nums.size()) {
            ans.push_back(comb);
            return;
        }

        comb.push_back(nums[index]);
        generate(nums,index+1,comb,ans);
        comb.pop_back();
        generate(nums,index+1,comb,ans);
    }
};