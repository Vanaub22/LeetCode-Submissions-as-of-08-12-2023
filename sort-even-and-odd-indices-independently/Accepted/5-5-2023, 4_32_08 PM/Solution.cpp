// https://leetcode.com/problems/sort-even-and-odd-indices-independently

class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        int pos=0;
        vector<int> even,odd;
        for(int i=0;i<nums.size();i++){
            if(i%2==0)
            even.push_back(nums[i]);
            else
            odd.push_back(nums[i]);
        }
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end(),greater<int>());
        for(int i=0;i<nums.size();i++){
            if(i%2==0)
            nums[i]=even[pos];
            else{
                nums[i]=odd[pos];
                pos++;
            }
        }
        return(nums);
    }
};