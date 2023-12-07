// https://leetcode.com/problems/sqrtx

class Solution {
public:
    int mySqrt(int x) {
        int root;
        for(int i=0;i<=x;i++){
            if((double)(i*i)==(double)x){
                root=i;
                break;
            }
            else if((double)i*i>(double)x){
                root=i-1;
                break;
            }
        }
        return(root);
    }
};