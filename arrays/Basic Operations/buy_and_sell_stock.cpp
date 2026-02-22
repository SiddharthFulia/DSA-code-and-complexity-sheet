// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0,min1=prices[0];
        for(auto x:prices){
            ans=max(ans,x-min1);
            min1=min(min1,x);
        }
        return ans;
    }
};