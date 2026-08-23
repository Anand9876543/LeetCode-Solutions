class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=prices[0],x=0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]>buy){
                x=max(x,prices[i]-buy);
            }
            buy=min(prices[i],buy);
        }
        return x;
    }
};