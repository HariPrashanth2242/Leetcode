class Solution {
public:
    priority_queue<int> maxheap;
    int lastStoneWeight(vector<int>& stones) {
        for(int i=0;i<stones.size();i++) maxheap.push(stones[i]);

        while(maxheap.size()>1){
            int first=maxheap.top();
            maxheap.pop();
            int second=maxheap.top();
            maxheap.pop();
            if(first != second){
                maxheap.push(first-second);
            }

        }

        return maxheap.empty() ? 0: maxheap.top();
    }
};