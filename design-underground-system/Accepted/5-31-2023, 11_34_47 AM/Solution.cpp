// https://leetcode.com/problems/design-underground-system

class UndergroundSystem {
public:
    unordered_map<int,pair<string,int>> idCheckin;
    unordered_map<string,pair<int,int>> journeyTime;
    void checkIn(int id, string stationName, int t) {
        idCheckin[id]={stationName,t};
    }
    void checkOut(int id, string stationName, int t) {
        string journey=idCheckin[id].first+" -> "+stationName;
        journeyTime[journey].second++;
        journeyTime[journey].first+=(t-idCheckin[id].second);
    }
    double getAverageTime(string startStation, string endStation) {  
        string journey=startStation+" -> "+endStation;
        return((double)journeyTime[journey].first/journeyTime[journey].second);
    }
};
/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */