// https://leetcode.com/problems/minimum-penalty-for-a-shop

class Solution {
public:
    int bestClosingTime(string customers) {
        int n=customers.size(),minimum_penalty,penalty=0,min_penalty_idx=0;
        for(char customer:customers) if(customer=='Y') penalty+=1;
        minimum_penalty=penalty;
        for(int i=1;i<=n;i++){
            if(customers[i-1]=='Y') penalty-=1;
            else penalty+=1;
            if(minimum_penalty>penalty){
                minimum_penalty=penalty;
                min_penalty_idx=i;
            }
        }
        return min_penalty_idx;
    }
};