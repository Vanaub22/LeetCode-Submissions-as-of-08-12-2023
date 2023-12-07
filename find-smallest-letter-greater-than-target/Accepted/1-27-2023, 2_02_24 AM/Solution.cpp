// https://leetcode.com/problems/find-smallest-letter-greater-than-target

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int start=0,end=letters.size()-1,mid=start+(end-start)/2;
        char ans='\0';
        while(start<=end){
            if(letters[mid]>target){
                end=mid-1;
                if(ans=='\0' || ans>letters[mid])
                ans=letters[mid];
                }
                else
                start=mid+1;
                mid=start+(end-start)/2;
            }
            return((ans=='\0')?(letters[0]):(ans));
        }
};