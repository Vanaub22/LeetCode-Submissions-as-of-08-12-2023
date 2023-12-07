// https://leetcode.com/problems/dota2-senate

class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int> radiant,dire;
        int n=senate.size();
        for(int i=0;i<n;i++)
        if(senate[i]=='R') radiant.push(i);
        else dire.push(i);
        while(!radiant.empty() && !dire.empty()){
          if(radiant.front()<dire.front()){
            radiant.pop();
            radiant.push(n);
          }
          else{
            dire.pop();
            dire.push(n);
          }
          n++;
        }
        return radiant.empty()?"Radiant":"Dire";
    }
};