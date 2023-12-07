// https://leetcode.com/problems/minimum-penalty-for-a-shop

class Solution {
public:
    int bestClosingTime(string customers) {
        int n=customers.size(),minimum_penalty=INT_MAX,min_penalty_idx=-1;
        // shop closing can start at 0 and can end at n-1
        for(int i=0;i<=n;i++){
            int penalty=0;
            for(int j=0;j<n;j++){
                if(j<i){
                    if(customers[j]=='N') penalty+=1;
                }
                else{
                    if(customers[j]=='Y') penalty+=1;
                }
            }
            if(penalty<minimum_penalty){
                minimum_penalty=penalty;
                min_penalty_idx=i;
            }
        }
        return min_penalty_idx;
    }
};