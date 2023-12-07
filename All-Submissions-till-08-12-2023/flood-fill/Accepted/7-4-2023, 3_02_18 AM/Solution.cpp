// https://leetcode.com/problems/flood-fill

class Solution {
public:
    void flood(vector<vector<int>>& image,int sr,int sc,int init_colour,int colour,int m,int n){
        if(image[sr][sc]==colour || (image[sr][sc]!=colour && image[sr][sc]!=init_colour)) return;
        image[sr][sc]=colour;
        if(sr>0) flood(image,sr-1,sc,init_colour,colour,m,n);
        if(sr<m-1) flood(image,sr+1,sc,init_colour,colour,m,n);
        if(sc>0) flood(image,sr,sc-1,init_colour,colour,m,n);
        if(sc<n-1) flood(image,sr,sc+1,init_colour,colour,m,n);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image,int sr,int sc,int colour){
        int init_colour=image[sr][sc],m=image.size(),n=image[0].size();
        flood(image,sr,sc,init_colour,colour,m,n);
        return(image);        
    }
};