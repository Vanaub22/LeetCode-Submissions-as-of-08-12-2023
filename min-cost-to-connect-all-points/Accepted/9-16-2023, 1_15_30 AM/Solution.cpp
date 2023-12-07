// https://leetcode.com/problems/min-cost-to-connect-all-points

class Solution {
public:
    int findDistance(vector<int>& a, vector<int>& b){
        return abs(a[0]-b[0])+abs(a[1]-b[1]);
    }
    vector<vector<pair<int,int>>> createAdjacencyList(vector<vector<int>>& points){
        int V=points.size();
        vector<vector<pair<int,int>>> adjacencyList(V);
        for(int i=0;i<V-1;i++)
        for(int j=i+1;j<V;j++){
            int weight=findDistance(points[i],points[j]);
            adjacencyList[i].push_back({weight,j});
            adjacencyList[j].push_back({weight,i});                                
        }
        return adjacencyList;
    }
    int minCostConnectPoints(vector<vector<int>>& points) {
        vector<vector<pair<int,int>>> adjacencyList=createAdjacencyList(points);
        int V=points.size(),cost=0,edges=0;
        vector<bool> visited(V,false);
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        pq.push({0,0});
        while(!pq.empty()){
            int weight=pq.top().first,vertex=pq.top().second;
            pq.pop();
            if(visited[vertex]) continue;
            visited[vertex]=true;
            cost+=weight;
            edges++;
            if(edges==V) return cost;
            for(pair<int,int>& neighbour:adjacencyList[vertex])
            if(!visited[neighbour.second]) pq.push(neighbour);
        }
        return cost;
    }
};