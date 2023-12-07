// https://leetcode.com/problems/robot-bounded-in-circle

class Solution {
public:
    typedef struct {
        char dir;
        pair<int,int> coordinates;        
    } position_vector;
    void init_vector(position_vector& vect, int x, int y, char direction) {
        vect.coordinates.first=x;
        vect.coordinates.second=y;
        vect.dir=direction;
    }
    bool isRobotBounded(string instructions) {
        position_vector pos;
        init_vector(pos,0,0,'N'); // Initially the Robot is facing North and is at O(0,0)
        // Simulating the journey of the Robot to find the Final Position
        for(char instruction:instructions) {
            if(instruction=='G') {
                if(pos.dir=='N') pos.coordinates.second++;
                else if(pos.dir=='S') pos.coordinates.second--;
                else if(pos.dir=='E') pos.coordinates.first++;
                else pos.coordinates.first--;
            }
            else if(instruction=='L') {
                if(pos.dir=='N') pos.dir='W';
                else if(pos.dir=='S') pos.dir='E';
                else if(pos.dir=='E') pos.dir='N';
                else pos.dir='S';
            }
            else {
                if(pos.dir=='N') pos.dir='E';
                else if(pos.dir=='S') pos.dir='W';
                else if(pos.dir=='E') pos.dir='S';
                else pos.dir='N';
            }
        }
        // After the first iteration if the Robot is back at the Origin => Definitely Bounded
        // Bounded if the Robot is not back to the Origin but pointing at some other direction
        // Will eventually change directions and converge to Origin after certain no. of steps
        return pos.coordinates==pair<int,int>{0,0} || pos.dir!='N';
    }
};