// https://leetcode.com/problems/statistics-from-a-large-sample

class Solution {
public:
    vector<double> sampleStats(vector<int>& count) {
        int n=countElements(count);
        return {findMin(count),findMax(count),findMean(count,n),findMedian(count,n),findMode(count)};
    }
    // Helper Functions for each task
    double findMean(vector<int>& count, int n) {
        long long sum=0;
        for(int i=0;i<=255;i++) sum+=((long long)count[i]*i);
        return (double)sum/n; 
    }
    double findKthElement(vector<int>& count, int k) {
        // K is 1-Indexed
        int i=0;
        for(;i<=255;i++) if(k-count[i]<=0) break;
        else k-=count[i];
        return i;
    }
    double findMedian(vector<int>& count, int n) {
        int mid=n/2;
        if(n%2!=0) return findKthElement(count,mid+1);
        else return (findKthElement(count,mid)+findKthElement(count,mid+1))/2;
    }
    double findMode(vector<int>& count) {
        int maxFreq=-1,mode=-1;
        for(int i=0;i<=255;i++) if(maxFreq<count[i]) {
            maxFreq=count[i];
            mode=i;
        }
        return mode;
    }
    int countElements(vector<int>& count) {
        int total=0;
        for(int i:count) if(i!=0) total+=i;
        return total;
    }
    double findMin(vector<int>& count) {
        int i=0;
        for(;i<=255;i++) if(count[i]!=0) break;
        return i;
    }
    double findMax(vector<int>& count) {
        int i=255;
        for(;i>=0;i--) if(count[i]!=0) break;
        return i;
    }
};
