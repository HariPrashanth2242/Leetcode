class Solution {
public:
    vector<int> getRow(int rowIndex) {
        long long row=rowIndex;
        row++;
        vector<int> ans;
        long long anss=1;
        ans.push_back(1);
        for(int i=1;i<row;i++){
            anss=anss*(row-i);
            anss=anss/i;
            ans.push_back(anss);
        }

        return ans;
    }
    
};