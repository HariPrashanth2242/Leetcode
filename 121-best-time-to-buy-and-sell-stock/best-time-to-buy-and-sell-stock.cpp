class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int r=1,l=0;
        int ans=0;
        while(r<prices.size()){
            if(prices[r]>prices[l]){
                int sum=prices[r]-prices[l];
                if(sum>ans){
                    ans=sum;
                }
            }
            if(prices[l]>prices[r]){
                    l=r;
                }
            r++;

        }
    return ans;
    }
};