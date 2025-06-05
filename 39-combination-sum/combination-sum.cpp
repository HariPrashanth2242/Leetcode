class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> comb;
        generate(candidates,0,comb,ans,target);
        return ans;
    }

    void generate(vector<int> &nums,int index, vector<int> &comb,vector<vector<int>> &ans,int target){
        if(index==nums.size()) {
            if(target==0){
                ans.push_back(comb);
            }
            
            return;
        }
        if(nums[index]<=target){
            comb.push_back(nums[index]);
        generate(nums,index,comb,ans,target-nums[index]);
        comb.pop_back();
        }
        generate(nums,index+1,comb,ans,target);
    }
};