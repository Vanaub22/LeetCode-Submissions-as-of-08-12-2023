// https://leetcode.com/problems/majority-element

class Solution {
public:
    // Boyer-Moore's Voting Algorithm
    int majorityElement(vector<int>& nums) {
        int el=-1,cnt=0;
        for(int i:nums){
            if(cnt==0){
                el=i;
                cnt=1;
            }
            else if(el==i)
            cnt++;
            else
            cnt--;
        }
        return(el);
    }
};