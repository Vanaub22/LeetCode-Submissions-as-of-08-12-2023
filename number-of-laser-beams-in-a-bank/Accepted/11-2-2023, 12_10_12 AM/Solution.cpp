// https://leetcode.com/problems/number-of-laser-beams-in-a-bank

class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int sender_devices=0,beams=0;
        for(string& floor:bank) {
            int devices=0;
            for(char c:floor) if(c=='1') devices++;
            if(devices) {
                beams+=sender_devices*devices;
                sender_devices=devices;
            } 
        }
        return beams;
    }
};