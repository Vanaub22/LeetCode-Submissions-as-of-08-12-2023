// https://leetcode.com/problems/add-to-array-form-of-integer

class Solution {
public:
    vector<int> addZeroes(vector<int> num, int k){
        while(k>0){
            k--;
        num.push_back(0);}
        return(num);
    }
    vector<int> addToArrayForm(vector<int>& a, int k) {
        vector<int> b,c;
        while(k>0){
            b.push_back(k%10);
            k/=10;
        }
        reverse(a.begin(),a.end());
        int i=0,n=(a.size()==b.size())?(a.size()+1):(max(a.size()+1,b.size()+1));
        if(a.size()<n)
        a=addZeroes(a,n-a.size());
        if(b.size()<n)
        b=addZeroes(b,n-b.size());
        while(n>0){
            n--;
            c.push_back((a[i]+b[i])%10);
            if(a[i]+b[i]>9)
            a[i+1]++;
            i++;
        }
        if(*(c.end()-1)==0)
        c.erase(c.end()-1);
        reverse(c.begin(),c.end());
        return(c);
    }
};