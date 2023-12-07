// https://leetcode.com/problems/find-the-prefix-common-array-of-two-arrays

class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n=A.size(),common=0;
        vector<int> C;
        unordered_map<int,int> freq;
        for(int i=0;i<n;i++){
            freq[A[i]]++;
            freq[B[i]]++;
            if(freq[A[i]]==2 || freq[B[i]]==2)
            common=(freq[A[i]]==freq[B[i]] && A[i]!=B[i])?common+2:common+1;
            C.push_back(common);
        }
        return(C);
    }
};