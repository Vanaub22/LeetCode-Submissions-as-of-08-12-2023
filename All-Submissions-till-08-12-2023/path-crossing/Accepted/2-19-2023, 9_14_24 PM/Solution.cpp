// https://leetcode.com/problems/path-crossing

class Solution {
public:
    bool isPathCrossing(string path) {
        pair<int,int> point(0,0);
        map<pair<int,int>,int> points;
        points[{0,0}]=1;
        for(char c:path){
            if(c=='E')
            ++point.second;
            if(c=='W')
            --point.second;
            if(c=='N')
            ++point.first;
            if(c=='S')
            --point.first;
            if(points[point]==1)
            return(true);
            points[point]++;
        }
        return(false);
    }
};