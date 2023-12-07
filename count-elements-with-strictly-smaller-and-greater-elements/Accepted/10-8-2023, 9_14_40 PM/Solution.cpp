// https://leetcode.com/problems/count-elements-with-strictly-smaller-and-greater-elements

class Solution {
public:
    int countElements(vector<int>& nums) {
        // map<int,int> freq;
        // for(int i:nums) freq[i]++;
        // vector<pair<int,int>> freq_pairs(freq.begin(),freq.end());
        // int n=freq_pairs.size(),count=0;
        // for(int i=1;i<n-1;i++) count+=freq_pairs[i].second;
        // return count;
        int lowest_count=0,highest_count=0,highest=INT_MIN,lowest=INT_MAX;
        for(int i:nums) {
            if(i>highest) {
                highest_count=0;
                highest=i;
            }
            if(i<lowest) {
                lowest_count=0;
                lowest=i;
            }
            if(i==highest) highest_count++;
            if(i==lowest) lowest_count++;
        }
        return highest==lowest?0:nums.size()-highest_count-lowest_count;
    }
};