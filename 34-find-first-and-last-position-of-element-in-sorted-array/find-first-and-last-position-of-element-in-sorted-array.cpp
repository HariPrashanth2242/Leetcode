class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> index;
        int ind = lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        int sid = upper_bound(nums.begin(),nums.end(),target)-nums.begin();
        sid--;
        if(ind !=size(nums) && nums[ind]==target) index.push_back(ind);
        else index.push_back(-1);
        if(sid >=0 && nums[sid]==target) index.push_back(sid);
        else index.push_back(-1);
        return index;
    }
};