class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int k) {
        vector<int> res;
        int start=0;
        int end=numbers.size()-1;
        while(start<end){
            if(numbers[start]+numbers[end]==k){
                res.push_back(start+1);
                res.push_back(end+1);
                return res;
            }
            if(numbers[start]+numbers[end]<k){
                start++;
            }
            if(numbers[start]+numbers[end]>k){
                end--;
            }
        }
        return res;
    }
};