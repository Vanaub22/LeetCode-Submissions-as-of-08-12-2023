// https://leetcode.com/problems/final-prices-with-a-special-discount-in-a-shop

class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> answer;
        int i,j,flag;
        for(i=0;i<prices.size();i++){
            flag=0;
            for(j=i+1;j<prices.size();++j){
                if(prices[i]>=prices[j]){
                    flag=1;
                    answer.push_back(prices[i]-prices[j]);
                    break;
                }
            }
            if(flag==0)
            answer.push_back(prices[i]);
        }
        return(answer);
    }
};