class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i,j=-1;
       int n=nums.size();
        for(i=0;i<n;i++){
            if(nums[i]==0){
                j=i;
                break;
            }
        }

        if(j==-1){
            return;
        }
        for(i=j;i<n;i++){
            if(nums[i]!=0){
                int temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
                j++;
            }
        }


    }
};