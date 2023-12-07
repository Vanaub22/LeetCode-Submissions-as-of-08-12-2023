// https://leetcode.com/problems/lemonade-change

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
       int chg_five=0,chg_ten=0;
       for(int i:bills){
           if(i==5)
           chg_five++;
           if(i==10){
               chg_five--;
               if(chg_five<0)
               return(false);
               else
               chg_ten++;
           }
           if(i==20){
               chg_five--;
               if(chg_ten>0)
               chg_ten--;
               else
               chg_five-=2;
               if(chg_five<0||chg_ten<0)
               return(false);
           }
       }
       return(true); 
    }
};