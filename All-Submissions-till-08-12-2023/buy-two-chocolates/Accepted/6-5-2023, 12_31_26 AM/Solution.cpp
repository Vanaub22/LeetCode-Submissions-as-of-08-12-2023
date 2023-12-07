// https://leetcode.com/problems/buy-two-chocolates

class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int minprice=101,secondminprice=102;
        for(int price:prices){
            if(minprice>price && secondminprice>price){
                secondminprice=minprice;
                minprice=price;
            }
            else if(minprice<=price && secondminprice>=price)
            secondminprice=price;
        }
        return(minprice+secondminprice<=money?money-(minprice+secondminprice):money);
    }
};