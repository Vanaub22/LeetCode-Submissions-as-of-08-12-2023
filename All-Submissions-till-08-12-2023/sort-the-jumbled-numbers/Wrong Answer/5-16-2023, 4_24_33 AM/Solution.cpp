// https://leetcode.com/problems/sort-the-jumbled-numbers

class Solution {
public:
    struct map_value{
        int mpVal,originalVal,index;
    };
    int mapped_value(int x, vector<int>& mapping){
        int value=0,i=0;
        while(x>0){
            value+=(pow(10,i)*mapping[x%10]);
            x/=10;
            i++;
        }
        return(value);
    }
    static bool comp(map_value a, map_value b){
        return(a.mpVal==b.mpVal?a.index<b.index:a.mpVal<b.mpVal);
    }
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        vector<map_value> M(nums.size());
        for(int i=0;i<nums.size();i++){
            M[i].mpVal=mapped_value(nums[i],mapping);
            M[i].originalVal=nums[i];
            M[i].index=i;
        }       
        sort(M.begin(),M.end(),comp);
        for(int i=0;i<nums.size();i++)
        nums[i]=M[i].originalVal;
        return(nums);
    }
};