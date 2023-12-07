// https://leetcode.com/problems/largest-number-after-digit-swaps-by-parity

class Solution {
public:
    int largestInteger(int num) {
        string n=to_string(num);
        vector<int> evens,odds;
        for(char x:n)
        if((x-'0')%2==0)
        evens.push_back(x);
        else
        odds.push_back(x);
        sort(evens.begin(),evens.end(),greater<int>());
        sort(odds.begin(),odds.end(),greater<int>());
        int even_pos=0,odd_pos=0;
        for(int i=0;i<n.length();i++){
            if((n[i]-'0')%2==0){
            n[i]=evens[even_pos];
            even_pos++;
            }
            else{
            n[i]=odds[odd_pos];
            odd_pos++;
            }
        }
        return(stoi(n));
    }
};