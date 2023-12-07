// https://leetcode.com/problems/most-visited-sector-in-a-circular-track

class Solution {
public:
    vector<int> mostVisited(int n, vector<int>& rounds) {
        vector<int> mostVisitedSectors;
        unordered_map<int,int> sector_visits;
        int m=rounds.size();
        for(int i=1;i<m;i++) {
            int start=rounds[i-1],end=rounds[i];
            if(start<=end) for(int sector=start;sector<end;sector++) sector_visits[sector]++;
            else {
                for(int sector=1;sector<end;sector++) sector_visits[sector]++;
                for(int sector=start;sector<=n;sector++) sector_visits[sector]++;
            }
        }
        sector_visits[rounds[m-1]]++; // Handling the Last Sector i.e., the end of all rounds
        int maxVisit=0;
        for(int i=1;i<=n;i++) {
            if(sector_visits[i]==maxVisit) mostVisitedSectors.emplace_back(i);
            else if(sector_visits[i]>maxVisit) { // Reset Condition
               mostVisitedSectors={i}; 
               maxVisit=sector_visits[i]; 
            }
        }
        return mostVisitedSectors;
    }
};
