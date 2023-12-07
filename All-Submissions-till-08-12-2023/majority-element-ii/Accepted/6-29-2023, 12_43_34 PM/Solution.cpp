// https://leetcode.com/problems/majority-element-ii

class Solution {
public:
    // Boyer-Moore's Voting Algorithm
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> majority_elements;
        int el1=-1,el2=-1,cnt1=0,cnt2=0,majority_cnt=floor(nums.size()/3);
        for(int i:nums)
        if(cnt1==0 && el2!=i){
            el1=i;
            cnt1=1;
        }
        else if(cnt2==0 && el1!=i){
            el2=i;
            cnt2=1;
        }
        else if(i==el1)
        cnt1++;
        else if(i==el2)
        cnt2++;
        else{
            cnt1--;
            cnt2--;
        }
        cnt1=cnt2=0;
        for(int i:nums)
        if(i==el1)
        cnt1++;
        else if(i==el2)
        cnt2++;
        if(cnt1>majority_cnt)
        majority_elements.push_back(el1);
        if(cnt2>majority_cnt)
        majority_elements.push_back(el2);
        return(majority_elements);
    }
};