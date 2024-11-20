class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_till=0,maxs=0;

        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                maxs++;
            }
            if(nums[i]==0){
                if(maxs>max_till){
                    max_till=maxs;
                    maxs=0;
                }
                maxs=0;
            }
        }
        if(maxs>max_till){
            max_till=maxs;
        }
        return max_till;
        
    }
};