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
      string check=gcd_str;
      bool ch1=false,ch2=false;
      while(check.size()<=max(str1.size(),str2.size())){
          if(check==str1)
          ch1=true;
          if(check==str2)
          ch2=true;
          check+=gcd_str;
      }
      return((ch1&&ch2)?(gcd_str):(""));
    }
};