// https://leetcode.com/problems/add-to-array-form-of-integer

class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int number=0;
        int place_value=1;
        for(int i=num.size()-1;i>=0;i--){
            number+=(num[i]*place_value);
            place_value*=10;
        }
        number+=k;
        num.clear();
        string str=to_string(number);
        for(char ch:str)
        num.push_back((int)(ch-'0'));
        return(num);
    }
};