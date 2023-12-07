// https://leetcode.com/problems/distribute-candies-to-people

class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> dist;
        int start=0,i=0,n=num_people;
        while(n>0){
        dist.push_back(0);
        n--;
        }
         for(;i<num_people;i++){
         ++start;
         dist[i]+=start;
         candies-=start;
         if(i==num_people-1)
         i=-1;
         if(candies-(start+1)<0)
         break;
         }
         dist[i+1]+=candies;
         return(dist);
    }
};