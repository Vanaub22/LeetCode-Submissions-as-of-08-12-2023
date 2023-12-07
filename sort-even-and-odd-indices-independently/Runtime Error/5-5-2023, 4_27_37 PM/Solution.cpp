// https://leetcode.com/problems/sort-even-and-odd-indices-independently

class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        bool f=false;
        int pos=0;
        vector<int> even,odd;
        for(int i:nums){
            if(!f)
            even.push_back(i);
            else
            odd.push_back(i);
            f=!f;
        }
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end(),greater<int>());
        for(int i=0;i<nums.size();i++){
            if(!i%2)
            nums[i]=even[pos];
            else{
                nums[i]=odd[pos];
                pos++;
            }
        }
        return(nums);
    }
};