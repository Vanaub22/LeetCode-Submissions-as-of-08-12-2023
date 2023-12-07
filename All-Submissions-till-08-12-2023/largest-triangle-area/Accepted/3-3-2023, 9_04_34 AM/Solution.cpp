// https://leetcode.com/problems/largest-triangle-area

class Solution {
public:
    double area(vector<int>& a, vector<int>& b, vector<int>& c){
        return(0.5*((a[0]*(b[1]-c[1]))+(b[0]*(c[1]-a[1]))+(c[0]*(a[1]-b[1]))));
    }    
    double largestTriangleArea(vector<vector<int>>& points) {
      double max_area=0;
      for(auto i:points){
          for(auto j:points){
              for(auto k:points){
                  if(area(i,j,k)>max_area)
                  max_area=area(i,j,k);
              }
          }
      }
      return(max_area); 
    }
};