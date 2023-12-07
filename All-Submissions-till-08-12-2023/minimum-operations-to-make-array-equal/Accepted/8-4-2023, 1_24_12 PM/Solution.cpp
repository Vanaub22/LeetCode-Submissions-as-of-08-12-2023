// https://leetcode.com/problems/minimum-operations-to-make-array-equal

class Solution {
public:
    int minOperations(int n) {
        int ops=0;
        int* arr=new int[n];
        for(int i=0;i<n;i++) arr[i]=2*i+1;
        int start=n%2?n/2+1:(n/2),target=n%2?arr[n/2]:arr[n/2]-1;
        for(int i=start;i<n;i++) ops+=arr[i]-target;
        delete[] arr;
        return ops;
    }
};