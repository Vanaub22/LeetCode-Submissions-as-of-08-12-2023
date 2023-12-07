// https://leetcode.com/problems/minimum-index-sum-of-two-lists

class Solution {
public:
    int leastIndexSum(string str,vector<string>& list1,vector<string>& list2){
        int index;
        for(int i=0;i<list1.size();i++)
        if(list1[i]==str){
            index=i;
            break;
        }
        for(int i=0;i<list2.size();i++)
        if(list2[i]==str){
            index+=i;
            break;
        }
        return(index);
    }
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        set<string> unique;
        vector<string> commons,minCommons;
        int leastSum=INT_MAX;
        for(string s:list1)
        unique.insert(s);
        for(string s:list2)
        if(unique.find(s)!=unique.end())
        commons.push_back(s);
        for(string s:commons)
        leastSum=min(leastSum,leastIndexSum(s,list1,list2));
        for(string s:commons)
        if(leastIndexSum(s,list1,list2)==leastSum)
        minCommons.push_back(s);
        return(minCommons);
    }
};