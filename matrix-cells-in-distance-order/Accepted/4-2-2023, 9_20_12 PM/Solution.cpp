// https://leetcode.com/problems/matrix-cells-in-distance-order

class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int rows, int cols, int r, int c) {
        vector<vector<int>> coordinates;
        vector<int> distances;
        for(int i=0;i<rows;i++)
        for(int j=0;j<cols;j++){
            distances.push_back(abs(i-r)+abs(j-c));
            coordinates.push_back({i,j});
        }
        for(int i=0;i<distances.size()-1;i++)
        for(int j=i+1;j<distances.size();j++)
        if(distances[i]>distances[j]){
            swap(distances[i],distances[j]);
            swap(coordinates[i],coordinates[j]);
        }
        return(coordinates);
    }
};