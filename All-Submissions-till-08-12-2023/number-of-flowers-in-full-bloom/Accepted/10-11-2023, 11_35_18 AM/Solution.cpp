// https://leetcode.com/problems/number-of-flowers-in-full-bloom

class Solution {
public:
    vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& people) {
        sort(flowers.begin(),flowers.end());
        // Need to return answer in order therefore, we will preserve vector
        vector<int> sortedPeople(people.begin(),people.end()),answer;
        sort(sortedPeople.begin(),sortedPeople.end());
        // Creating a min heap to store the minimum end time at top
        priority_queue<int,vector<int>,greater<int>> minHeap;
        // Unordered Map to map people to no. of flowers
        unordered_map<int,int> visibleFlowers;
        int i=0,f=flowers.size();
        for(int arrivalTime:sortedPeople) {
            while(i<f && flowers[i][0]<=arrivalTime) {
                minHeap.push(flowers[i][1]);
                i++;
            }
            // Removing flowers that will stop blooming before arrivalTime
            while(!minHeap.empty() && minHeap.top()<arrivalTime) minHeap.pop();
            // No. of flower visible for the person who arrives at arrivalTime
            visibleFlowers[arrivalTime]=minHeap.size();
        }
        // Creating answer in proper order
        for(int person:people) answer.push_back(visibleFlowers[person]);
        return answer;
    }
};