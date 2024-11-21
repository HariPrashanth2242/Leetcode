class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    map<int,int> ele;
    vector<int>ans;
    for(int i=0;i<nums.size();i++){
        int a = nums[i];
        int more=target-a;
        if(ele.find(more)!=ele.end()){
            ans.push_back(ele[more]);
            ans.push_back(i);
            return ans;
        }
        ele[a]=i;
    }
    return ans;
    }
};