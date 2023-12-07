// https://leetcode.com/problems/kids-with-the-greatest-number-of-candies

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    vector<bool> result;
    int greatest=*max_element(candies.begin(),candies.end());
    for(int i:candies)
    result.push_back(i+extraCandies>=greatest);
    return(result);   
    }
};