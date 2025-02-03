class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int c=0;
        unordered_map<int,int> mpp;
        int res=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                c--;
            }else if(nums[i] == 1){
                  c++;
            }
            if(c==0){
                res=i+1;
            }
            else if(mpp.find(c) != mpp.end()){
                res=max(res,i-mpp[c]);
            }
            else{
                mpp[c]=i;
            }
        }
        return res;
    }
};