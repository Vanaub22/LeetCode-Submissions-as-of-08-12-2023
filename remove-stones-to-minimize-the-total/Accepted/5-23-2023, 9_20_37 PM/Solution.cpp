// https://leetcode.com/problems/remove-stones-to-minimize-the-total

class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> pq;
        for(int pile:piles)
        pq.push(pile);
        for(int i=0;i<k;i++){
            if(pq.empty())
            return(0);
            int new_pile=pq.top()-floor(pq.top()/2);
            pq.pop();
            pq.push(new_pile);
        }
        int stones=0;
        while(!pq.empty()){
            stones+=pq.top();
            pq.pop();
        }
        return(stones);
    }
};