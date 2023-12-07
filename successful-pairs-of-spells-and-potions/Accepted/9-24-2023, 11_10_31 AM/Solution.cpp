// https://leetcode.com/problems/successful-pairs-of-spells-and-potions

class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        int m=potions.size(),n=spells.size();
        vector<int> pairs(n,0);
        sort(potions.begin(),potions.end());
        // we need to find the minimum potion index for which spell x potion >= success
        // then m - index will give us the no. of pairs[i]
        for(int i=0;i<n;i++){
            int low=0,high=m-1,mid;
            while(low<=high){
                mid=low+(high-low)/2;
                if((long long)potions[mid]*spells[i]>=success){
                    pairs[i]=m-mid;
                    high=mid-1;
                }
                else low=mid+1;
            }
        }
        return pairs;
    }
};