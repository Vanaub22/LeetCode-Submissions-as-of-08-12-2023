// https://leetcode.com/problems/add-to-array-form-of-integer

class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int n=num.size(),number=0;
        for(int i=0;i<n;i++)
        number+=(num[n-i-1]*pow(10,i));
        number+=k;
        num.clear();
        while(number>0){
            num.push_back(number%10);
            number/=10;
        }
        reverse(num.begin(),num.end());
        return(num);
    }
};