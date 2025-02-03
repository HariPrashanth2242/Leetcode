class NumArray {
public:
    vector<int> numss;
    NumArray(vector<int>& nums) {
        numss.resize(nums.size());
    numss[0]=nums[0];
    for (int i=1;i<nums.size();i++){
        numss[i] = numss[i - 1] + nums[i];
    }
    }
    
    int sumRange(int left, int right) {
        if (left == 0) {
            return numss[right];
        } else {
            return numss[right] - numss[left - 1];
        }
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */