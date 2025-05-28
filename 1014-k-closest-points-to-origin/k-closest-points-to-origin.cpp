class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> ans;

         priority_queue<pair<int, vector<int>>> maxheap;

        for(int i=0;i<points.size();i++){
            int dis=points[i][0]*points[i][0]+points[i][1]*points[i][1];        
            maxheap.push({dis,points[i]});
            if(maxheap.size()>k) maxheap.pop();
        }

        while (!maxheap.empty()) {
            ans.push_back(maxheap.top().second);
            maxheap.pop();
        }

        return ans;
    }
};