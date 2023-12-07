// https://leetcode.com/problems/koko-eating-bananas

class Solution {
public:
    long long calcTime(vector<int>& piles, int k){
        long long time=0;
        for(int pile:piles) time+=ceil((double)pile/k);
        return time;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        if(piles.size()==1) return ceil((double)piles[0]/h);
        int low=1,high=*max_element(piles.begin(),piles.end()),k=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(calcTime(piles,mid)<=h){
                k=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return low;
    }
};