class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size(),max=nums[0];
        long int total=(n*(n+1))/2;
        long int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(nums[i]>max){
                max=nums[i];
            }
        }

        return total-sum;

    }
};