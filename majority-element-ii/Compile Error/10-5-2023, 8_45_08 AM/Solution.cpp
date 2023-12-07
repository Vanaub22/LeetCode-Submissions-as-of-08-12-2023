// https://leetcode.com/problems/majority-element-ii

class Solution {
public:
    // Original HashMap Solution will take up additonal space
    // Boyer-Moore's Voting Algorithm reduces this to O(N) time and O(1) Space
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> majority_elements;
        // At most two elements can have frequency more than floor(n/3)
        int cnt1=0,cnt2=0,el1=INT_MIN,el2=INT_MIN,majority_cnt=floor(nums.size()/3);
        // Finding out the 2 majority elements in the array 
        for(int i:nums) {
            if(cnt1==0 && el1!=i) {
                cnt1=1;
                el1=i;
            }
            else if(cnt2==0 && el2!=i) {
                cnt2=1;
                el2=i;
            }
            else if(el1==i) cnt1++;
            else if(el2==i) cnt2++;
            else {
                cnt1--;
                cnt2--;
            }
        }
        // Finding out the individual frequencies of the majority elements
        cnt1=cnt2=0; 
        for(int i:nums) if(i==el1) cnt1++; 
        else if(i==el2) cnt2++;
        if(cnt1>majority_cnt) majority_elements.emplace_back(el1);
        if(cnt2>majority_cnt) majority_elements.emplace_back(el2);
        return ans;
    }
};