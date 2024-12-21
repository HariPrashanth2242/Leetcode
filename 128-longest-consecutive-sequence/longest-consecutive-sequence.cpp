class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int cuur=0,longest=1,siz=nums.size();
        if(siz==0){
            return 0;
        }
        if(siz==1){
            return 1;
        }
        unordered_set <int> set;
        for(int i=0;i<siz;i++){
            set.insert(nums[i]);
        }

        for(auto it:set){
            if(set.find(it-1)==set.end()){
                int cnt=1;
                int x=it;
                while(set.find(x+1) !=set.end()){
                    x=x+1;
                    cnt++;
                }
                longest = max(longest,cnt);
            }
        }
        return longest;
    }
};