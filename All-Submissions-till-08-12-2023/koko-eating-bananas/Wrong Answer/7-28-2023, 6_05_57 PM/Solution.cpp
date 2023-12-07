// https://leetcode.com/problems/koko-eating-bananas

class Solution {
public:
    int calcTime(vector<int>& piles, int k){
        int time=0;
        for(int pile:piles) time+=ceil((float)pile/k);
        return time;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1,high=*max_element(piles.begin(),piles.end()),k=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(calcTime(piles,mid)<=h){
                k=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return k;
    }
};