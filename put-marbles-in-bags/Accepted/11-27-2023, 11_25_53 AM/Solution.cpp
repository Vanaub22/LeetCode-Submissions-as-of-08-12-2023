// https://leetcode.com/problems/put-marbles-in-bags

class Solution {
public:
    // Greedy Approach
    long long putMarbles(vector<int>& weights, int k) {
        // Only the sum of pairs at splitting points matter
        // First, we will find out the pair sums
        int n=weights.size();
        vector<int> pairSums(n-1,0);
        for(int i=0;i<n-1;i++) pairSums[i]+=weights[i]+weights[i+1];
        // Sorting the pair sums
        sort(pairSums.begin(),pairSums.end());
        // Finding out the lowest (k - 1) pair sums and highest (k - 1) pair sums
        // Both maximum and minimum pair sums will have weights[0] & weight[n - 1]
        long long ans=0;
        for(int i=0;i<k-1;i++) ans+=pairSums[n-2-i]-pairSums[i];
        return ans;
    }
};