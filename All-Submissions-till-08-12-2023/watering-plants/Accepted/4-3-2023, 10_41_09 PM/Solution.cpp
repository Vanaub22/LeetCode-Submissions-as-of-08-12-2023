// https://leetcode.com/problems/watering-plants

class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int i=0,steps=0,water=capacity;
        for(;i<plants.size();i++){
            if(plants[i]>water){
                steps+=(i+1);
                i=0;
                water=capacity;
            }
            else{
                ++steps;
                water-=plants[i];
                plants[i]=0;                
            }
        }
        return(steps);
    }
};