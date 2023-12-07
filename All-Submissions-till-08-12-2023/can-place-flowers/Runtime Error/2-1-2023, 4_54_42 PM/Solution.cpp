// https://leetcode.com/problems/can-place-flowers

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        for(int i=1;i<flowerbed.size()-1;i++){
            if(n==0)
            return(true);
            if(flowerbed[i]==0 && flowerbed[i-1]==0 && flowerbed[i+1]==0){
                flowerbed[i]=1;
                n--;
            }
        }
        if(flowerbed[0]==0 && flowerbed[1]==0 && n!=0)
        n--;
        if(flowerbed[flowerbed.size()-1]==0 && flowerbed[flowerbed.size()-2]==0 && n!=0)
        n--;
        return(n==0);
    }
};