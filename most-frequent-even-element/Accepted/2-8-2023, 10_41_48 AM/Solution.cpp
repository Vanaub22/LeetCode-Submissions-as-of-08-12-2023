// https://leetcode.com/problems/most-frequent-even-element

class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       map<int,int> mp;
       int max_even_freq=0,num=-1;
       for(int i=0;i<nums.size();i++)
       mp[nums[i]]++;
       map<int,int>::iterator it=mp.begin();
       while(it!=mp.end()){
           if(it->second>max_even_freq && it->first%2==0){
           num=it->first;
           max_even_freq=it->second;
           }
        it++;
       }
       return(num); 
    }
};