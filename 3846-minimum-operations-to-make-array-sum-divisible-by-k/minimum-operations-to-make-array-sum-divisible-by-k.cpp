class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sum=0;
        for(int i=0;i<nums.size();i++) sum+=nums[i];
        cout<<sum;
        int op=sum%k;
        sort(nums.begin(), nums.end(), [](int a, int b) {
            return a < b;
        });
        
    return op;
    }
    
};