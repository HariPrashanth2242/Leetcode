class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int> comb;
        sort(candidates.begin(),candidates.end());
        generate(candidates,0,comb,ans,target);
        return ans;
    }
    void generate(vector<int> &nums,int index, vector<int> &comb,vector<vector<int>> &ans,int target){
                if(target==0) ans.push_back(comb);

            
            


        for(int i=index;i<nums.size();i++){
            if(i>index && nums[i]==nums[i-1]) continue;
            if(nums[i]<=target){
            comb.push_back(nums[i]);
            generate(nums,i+1,comb,ans,target-nums[i]);
            comb.pop_back();
            }
            
        }
        
       
    }
};