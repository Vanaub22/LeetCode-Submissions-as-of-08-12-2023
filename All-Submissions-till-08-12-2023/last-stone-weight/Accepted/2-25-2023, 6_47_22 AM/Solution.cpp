// https://leetcode.com/problems/last-stone-weight

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        int a,b;
        for(int i:stones)
        pq.push(i);
        while(pq.size()>1){
            a=pq.top();
            pq.pop();
            if(pq.empty())
            return(a);
            else{
                b=pq.top();
                pq.pop();
                pq.push(a-b);
            }
        }
        return(pq.top()); 
    }
};