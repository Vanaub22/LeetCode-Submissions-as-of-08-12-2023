// https://leetcode.com/problems/append-k-integers-with-minimal-sum

class Solution {
public:
    long long minimalKSum(vector<int>& arr, int k) {
        sort(arr.begin(),arr.end());
        long long minimalSum=0;
        int idx=0,missing=0,pos_no=1,n=arr.size();
        while(idx<n && missing<k){
            if(pos_no==arr[idx]) idx++;
            else{
                missing++;
                minimalSum+=pos_no;
            }
            pos_no++;
        }        
        while(missing<k){
            missing++;
            minimalSum+=pos_no;
            pos_no++;
        }
        return minimalSum;
    }
};