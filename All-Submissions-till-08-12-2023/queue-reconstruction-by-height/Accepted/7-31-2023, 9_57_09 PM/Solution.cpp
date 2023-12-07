// https://leetcode.com/problems/queue-reconstruction-by-height

class Solution {
public:
    static bool comp(vector<int>& p1, vector<int>& p2){
        return p1[0]==p2[0]?p1[1]>p2[1]:p1[0]<p2[0];
    }
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        int n=people.size();
        vector<vector<int>> queue(n,vector<int>(2,-1));
        sort(people.begin(),people.end(),comp);
        for(int i=0;i<n;i++){
            int empty_count=0,j=0;
            for(;j<n;j++){
                if(queue[j][1]==-1) empty_count++;
                if(empty_count==people[i][1]+1) break;
            }
            queue[j]=people[i];
        }
        return queue;
    }
};