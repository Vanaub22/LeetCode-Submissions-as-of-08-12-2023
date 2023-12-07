// https://leetcode.com/problems/maximum-spending-after-buying-items

class Solution {
public:
    long long maxSpending(vector<vector<int>>& values) {
        long long maxSpending=0;
        int m=values.size(),total_items=m*values[0].size();
        // Rows of the values matrix are sorted in non-increasing order for a reason
        // The strategy here is to buy the lower value items at the beginning
        // Then proceed to buy the higher value items towards the end
        // In this way, the spending will be maximized (Greedy Approach)
        for(int day=1;day<=total_items;day++) {
            int minValue=1e6,minValueRow=0;
            for(int i=0;i<m;i++) {
                if(values[i].size()>0 && values[i].back()<minValue) {
                    minValue=values[i].back();
                    minValueRow=i;
                }
            }
            values[minValueRow].pop_back(); // That item has been bought
            maxSpending+=minValue*day;
        }
        return maxSpending;
    }
};