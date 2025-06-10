class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> comb;
        sort(nums.begin(),nums.end());
        generate(nums,0,comb,ans);
        return ans;
    }
      void generate(vector<int> &nums,int index, vector<int> &comb,vector<vector<int>> &ans){
            ans.push_back(comb);


        for(int i=index;i<nums.size();i++){
            if(i>index && nums[i]==nums[i-1]) continue;
            comb.push_back(nums[i]);
            generate(nums,i+1,comb,ans);
            comb.pop_back();
        }
        
       
    }
};