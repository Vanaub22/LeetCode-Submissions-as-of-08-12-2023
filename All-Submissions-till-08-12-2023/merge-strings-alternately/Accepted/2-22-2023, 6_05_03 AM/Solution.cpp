// https://leetcode.com/problems/merge-strings-alternately

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
      int k=0,i=0,j=0; 
      string result; 
      while(i<word1.length() && j<word2.length()){
          if(k%2==0){
          result+=word1[i];
          i++;
          }
          else{
          result+=word2[j];
          j++;
          }
          k++;
      }
      if(i==word1.length())
      result+=word2.substr(j,word2.length()-j);
      else
      result+=word1.substr(i,word1.length()-i);
      return(result);
    }
};