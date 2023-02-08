/*
  I used max elements of an array as refrence so that i am able to predict the max sum diffrence between 2 numbers 
  leetcode: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/submissions/894035302/
*/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size(), a[n], temp=prices.back();

        for(int i=prices.size()-1; i>=0; i--){
          //uploading them max sum into another new array
            a[i]=max(temp,prices[i]);
            temp=a[i];
        }
        int res=0;
      //now here checking for max diffrence
        for(int i=0; i<n; i++){
            res=max(res,a[i]-prices[i]);
        }
        return res;
    }
};
