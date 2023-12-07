// https://leetcode.com/problems/remove-duplicate-letters

class Solution {
public:
    // Using Stack and Greedy
    string removeDuplicateLetters(string s) {
        unordered_map<char,int> freq;
        unordered_map<char,bool> visited;
        stack<int> stk; // to store indices
        string res="";
        int n=s.size();
        for(char c:s) freq[c]++;
        for(int i=0;i<n;i++){
            freq[s[i]]--; // decrementing frequency to keep a track of how many are left
            if(visited[s[i]]) continue; // already visited, no need to consider
            // remove stack top element indices if lexicographical order is affected
            while(!stk.empty() && s[stk.top()]>s[i] && freq[s[stk.top()]]>0){
                visited[s[stk.top()]]=false;
                stk.pop();
            }
            stk.push(i); // add current character index to the stack
            visited[s[i]]=true;
        }
        // create the resultant string
        while(!stk.empty()){
            res+=s[stk.top()];
            stk.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};