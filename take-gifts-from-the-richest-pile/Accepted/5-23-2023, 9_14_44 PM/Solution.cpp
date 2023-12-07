// https://leetcode.com/problems/take-gifts-from-the-richest-pile

class Solution {
public:
    long long pickGifts(vector<int>& gift_piles, int k) {
        priority_queue<int> pq;
        for(int gift_pile:gift_piles)
        pq.push(gift_pile);
        for(int i=0;i<k;i++){
            if(pq.empty())
            return(0);
            int new_pile=sqrt(pq.top());
            pq.pop();
            pq.push(new_pile);
        }
        long long gifts=0;
        while(!pq.empty()){
            gifts+=pq.top();
            pq.pop();
        }
        return(gifts);
    }
};