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
          if(radiant.front()<dire.front()) radiant.push(n);
          else dire.push(n);
          radiant.pop();
          dire.pop();
          n++;
        }
        return dire.empty()?"Radiant":"Dire";
    }
};