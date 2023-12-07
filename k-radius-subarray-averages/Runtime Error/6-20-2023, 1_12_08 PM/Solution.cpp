// https://leetcode.com/problems/k-radius-subarray-averages

class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        if(k==0)
        return(nums);
        int n=nums.size(),prefsum=0,suffsum=0;
        vector<int> krad_avg(n);
        vector<long long int> prefthree(n),suffthree(n);
        if(k>=n){
            fill(krad_avg.begin(),krad_avg.end(),-1);
            return(krad_avg);
        }
        for(int i=0;i<k;i++){
            prefsum+=nums[i];
            suffsum+=nums[n-i-1];
            krad_avg[i]=-1;
            krad_avg[n-i-1]=-1;
        }
        for(int i=k;i<n-k;i++){
            prefthree[i]=prefsum+nums[i];
            prefsum+=(nums[i]-nums[i-k]);
        }    
        for(int i=n-k-1;i>=k;i--){
            suffthree[i]=suffsum;
            suffsum+=(nums[i]-nums[i+k]);
        }
        for(int i=k;i<n-k;i++){
            long long int sum=prefthree[i]+suffthree[i];
            krad_avg[i]=floor((int)(sum/(2*k+1)));
        }
        return(krad_avg);
    }
};