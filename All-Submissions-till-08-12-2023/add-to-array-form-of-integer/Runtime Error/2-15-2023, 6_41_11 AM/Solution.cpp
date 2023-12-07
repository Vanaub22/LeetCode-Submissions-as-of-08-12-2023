// https://leetcode.com/problems/add-to-array-form-of-integer

class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        string str;
        int number;
        for(int i:num)
        str+=to_string(i);
        number=stoi(str);
        number+=k;
        num.clear();
        str=to_string(number);
        for(char ch:str)
        num.push_back((int)(ch-'0'));
        return(num);
    }
};