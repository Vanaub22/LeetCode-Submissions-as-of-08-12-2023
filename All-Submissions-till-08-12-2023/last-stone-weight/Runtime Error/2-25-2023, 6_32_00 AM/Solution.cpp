// https://leetcode.com/problems/last-stone-weight

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        if(stones.size()==1)
        return(stones[0]);
        sort(stones.begin(),stones.end(),greater<int>());
        vector<int>::iterator it=stones.begin();
        while(it!=stones.end()){
            if(*it==*(it+1)){
            stones.erase(it,it+1);
            it-=1;
            }
            else{
                *it-=*(it+1);
                stones.erase(it+1);
                it++;
            }
        }
        return((stones.size()==0)?(0):(stones[0]));
    }
};