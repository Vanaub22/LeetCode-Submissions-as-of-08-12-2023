// https://leetcode.com/problems/greatest-common-divisor-of-strings

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
      if(str1[0]!=str2[0])
      return("");
      string gcd_str;
      int gcd=1;
      for(int i=0;i<=min(str1.size(),str2.size());i++){
          if(str1[i]==str2[i])
          gcd_str+=str1[i];
      }
      gcd=gcd_str.size();
      while(gcd>0){
          if(str1.size()%gcd==0 && str2.size()%gcd==0)
          break;
          else
          gcd--;
      }
      gcd_str=gcd_str.substr(0,gcd);
      return(gcd_str);
    }
};