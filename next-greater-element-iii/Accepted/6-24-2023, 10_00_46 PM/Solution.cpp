// https://leetcode.com/problems/next-greater-element-iii

class Solution {
public:
    bool nextPermutation(string& num){
        int n=num.size(),x=-1;
        for(int i=n-1;i>0;i--)
        if(num[i]>num[i-1]){
            x=i-1;
            break;
        }
        if(x==-1)
        return(false);
        int s=x+1;
        for(int i=x+1;i<n;i++)
        if(num[i]<=num[s] && num[i]>num[x])
        s=i;
        swap(num[x],num[s]);
        reverse(num.begin()+x+1,num.end());
        return(true);
    }
    int nextGreaterElement(int n) {
        string num=to_string(n);
        return((nextPermutation(num)==false||INT_MAX<stoll(num))?-1:stoi(num));
    }
};