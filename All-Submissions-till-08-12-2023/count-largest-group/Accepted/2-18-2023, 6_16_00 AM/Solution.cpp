// https://leetcode.com/problems/count-largest-group

class Solution {
public:
    int sum_of_digits(int num){
        int sum=0;
        while(num>0){
            sum+=(num%10);
            num/=10;
        }
        return(sum);
    }
    int countLargestGroup(int n) {
        unordered_map<int,int> umap;
        for(int i=1;i<=n;i++)
        umap[sum_of_digits(i)]++;
        int max_size=INT_MIN,groups=0;
        for(auto it:umap)
        max_size=max(max_size,it.second);
        for(auto it:umap)
        if(it.second==max_size)
        groups++;
        return(groups);
    }
};