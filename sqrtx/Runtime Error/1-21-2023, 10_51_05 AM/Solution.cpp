// https://leetcode.com/problems/sqrtx

class Solution {
public:
    int mySqrt(int x) {
        int root;
        for(int i=0;i<=x;i++){
            if(i*i==x){
                root=i;
                break;
            }
            else if(i*i>x){
                root=i-1;
                break;
            }
        }
        return(root);
    }
};