class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long int max=LONG_MIN;
        long long int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum>max){
                max=sum;
            }
             if(sum<0)
            {
                sum=0;
            }
        }
        return max;
    }
};