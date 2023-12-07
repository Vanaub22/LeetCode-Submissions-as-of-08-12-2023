// https://leetcode.com/problems/total-cost-to-hire-k-workers

class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) {
        long long cost=0;
        int n=costs.size(),left=0,right=n-1,workers=0;
        priority_queue<int,vector<int>,greater<int>> pq1,pq2;
        while(++workers<=k){
            while(pq1.size()<candidates && left<=right)
            pq1.push(costs[left++]);
            while(pq2.size()<candidates && right>=left)
            pq2.push(costs[right--]); 
            if(!pq1.empty() && (pq2.empty() || pq1.top()<=pq2.top())){
                cost+=pq1.top();
                pq1.pop();
            }
            else{
                cost+=pq2.top();
                pq2.pop();
            }
        }
        return(cost);
    }
};