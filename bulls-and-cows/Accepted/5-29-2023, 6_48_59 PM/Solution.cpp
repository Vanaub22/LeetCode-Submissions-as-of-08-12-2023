// https://leetcode.com/problems/bulls-and-cows

class Solution {
public:
    string getHint(string secret, string guess) {
       unordered_map<char,int> htable;
       int n=secret.length(),bulls=0,cows=0;
       for(int i=0;i<n;i++){
           if(secret[i]==guess[i])
           bulls++;
           else
           htable[secret[i]]++;
       } 
       for(int i=0;i<n;i++){
           if(secret[i]!=guess[i] && htable[guess[i]]>0){
               --htable[guess[i]];
               cows++;
           }
       }
       return(to_string(bulls)+"A"+to_string(cows)+"B");
    }
};