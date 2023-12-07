// https://leetcode.com/problems/self-dividing-numbers

class Solution {
public:
    bool self_dividing(int num){
        int copy=num;
        while(copy>0){
            if(copy%10==0)
            return(false);
            if(num%(copy%10)!=0)
            return(false);
            copy/=10;
        }
        return(true);
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> result;
        for(int i=left;i<=right;i++)
        if(self_dividing(i))
        result.push_back(i);
        return(result);
    }
};