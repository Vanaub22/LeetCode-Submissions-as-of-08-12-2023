// https://leetcode.com/problems/majority-element

class Solution {
public:
    int majorityElement(vector<int>& nums){
       unordered_map<int,int> umap;
       for(int i=0;i<nums.size();i++)
       umap[nums[i]]++;
       unordered_map<int,int>::iterator it=umap.begin();
       int max_freq=it->second,majority_element;
       while(it!=umap.end()){
           if(it->second>=max_freq)
           majority_element=it->first;
           it++;
       } 
       return(majority_element);
    }
};