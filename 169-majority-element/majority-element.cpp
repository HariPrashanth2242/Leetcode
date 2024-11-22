class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int element=nums[0];
        for(int i=0;i<nums.size();i++){
            if(nums[i]==element){
                count++;
                continue;
            }
            else if(nums[i]!=element && count>0){
                count--;
                continue;
            }

            element=nums[i];

        }
        return element;
    }
};