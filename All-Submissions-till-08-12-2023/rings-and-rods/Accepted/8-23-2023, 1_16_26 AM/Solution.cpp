// https://leetcode.com/problems/rings-and-rods

class Solution {
public:
    int countPoints(string rings) {
        int n=rings.size(),ans=0;
        unordered_map<int,vector<bool>> rod_rings;
        for(int i=1;i<n;i+=2){
            if(rod_rings.find(rings[i])==rod_rings.end()) rod_rings[rings[i]]=vector<bool>(3,false);
            if(rings[i-1]=='R') rod_rings[rings[i]][0]=true;
            else if(rings[i-1]=='G') rod_rings[rings[i]][1]=true;
            else rod_rings[rings[i]][2]=true;
        }
        for(auto presence:rod_rings)
        if(presence.second[0] && presence.second[1] && presence.second[2]) ans++;
        return ans;
    }
};