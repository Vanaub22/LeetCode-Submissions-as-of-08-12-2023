// https://leetcode.com/problems/maximum-enemy-forts-that-can-be-captured

class Solution {
public:
    int captureForts(vector<int>& forts) {
        int n=forts.size(),max_capture=0,capture=0;
        for(int i=0;i<n;i++)
        if(forts[i]==1){
            for(int j=i-1;j>=0;j--)
            if(forts[j]==0)
            capture++;
            else{
                if(forts[j]==-1)
                max_capture=max(max_capture,capture);
                capture=0;
                break;
            }
            capture=0;
            for(int j=i+1;j<n;j++)
            if(forts[j]==0)
            capture++;
            else{
                if(forts[j]==-1)
                max_capture=max(max_capture,capture);
                capture=0;
                break;
            }
        }
        return(max_capture);
    }
};