// https://leetcode.com/problems/buddy-strings

class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if(s.length()!=goal.length()) return false;
        else if(s==goal){
            unordered_map<int,int> freq;
            for(char c:s){
                if(freq[c]==1) return true;
                freq[c]++;
            }
            return false;
        }
        else{
            int firstIndex=-1,secondIndex=-1,n=s.length();
            for(int i=0;i<n;i++)
            if(s[i]!=goal[i]){
                if(firstIndex==-1 && secondIndex==-1) firstIndex=i;
                else if(secondIndex==-1 && firstIndex!=-1) secondIndex=i;
                else return false;
            }
            return(firstIndex!=-1 && secondIndex!=-1);
        }
        return true;
    }
};