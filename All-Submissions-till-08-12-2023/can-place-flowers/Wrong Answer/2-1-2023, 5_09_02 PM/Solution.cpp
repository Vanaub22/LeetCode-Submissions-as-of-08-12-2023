// https://leetcode.com/problems/can-place-flowers

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int l=flowerbed.size();
        if(n==0)
        return(true);
        if(l==1)
        return(flowerbed[0]==0);
        if(l==2)
        return(flowerbed[0]==0 && flowerbed[1]==0);
        if(flowerbed[0]==0 && flowerbed[1]==0 && n!=0){
            n--;
            flowerbed[0]=1;
        }
        if(flowerbed[l-1]==0 && flowerbed[l-2]==0 && n!=0){
            n--;
            flowerbed[l-1]=1;
        }
        for(int i=1;i<l-1;i++){
            if(n==0)
            return(true);
            if(flowerbed[i]==0 && flowerbed[i-1]==0 && flowerbed[i+1]==0){
                flowerbed[i]=1;
                n--;
            }
        }
        return(n==0);
    }
};