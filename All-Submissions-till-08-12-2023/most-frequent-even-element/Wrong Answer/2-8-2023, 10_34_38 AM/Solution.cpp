// https://leetcode.com/problems/most-frequent-even-element

class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
       unordered_map<int,int> mp;
       int flag=0,max_even_freq=-1,num=0;
       for(int i=0;i<nums.size();i++)
       mp[nums[i]]++;
       unordered_map<int,int>::iterator it=mp.begin();
       while(it!=mp.end()){
           if(flag==0 && it->second>max_even_freq && it->first%2==0 && it->first!=0){
           num=it->first;
           max_even_freq=it->second;
           }
           if(flag==1 && it->second>max_even_freq && it->first%2==0 && it->first<=num && it->first!=0){
           num=it->first;
           max_even_freq=it->second;
           }
        it++;
       }
       return(max_even_freq); 
    }
};