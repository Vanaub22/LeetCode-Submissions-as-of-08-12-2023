// https://leetcode.com/problems/minimum-speed-to-arrive-on-time

class Solution {
public:
    int minSpeedOnTime(vector<int>& distances, double timeLimit) {
        int low=1,high=1e7,minimumSpeed=-1;
        double mid=low+(high-low)/2;
        while(low<=high){
            if(getTime(distances,mid)<=timeLimit){
                high=mid-1;
                minimumSpeed=mid;
            }
            else low=mid+1;
            mid=low+(high-low)/2;
        }
        return minimumSpeed;
    }
    double getTime(vector<int>& distances, double speed){
        int n=distances.size();
        double totalTime=0.0;
        for(int i=0;i<n-1;i++) totalTime+=ceil(distances[i]/speed);
        totalTime+=(double)distances[n-1]/speed;
        return totalTime;
    }
};