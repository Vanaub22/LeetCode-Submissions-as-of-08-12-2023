// https://leetcode.com/problems/1-bit-and-2-bit-characters

class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        if(bits.size()==1)
        return((bits[0]==0)?true:false);
        int index=0;
        if(bits[bits.size()-1]==0)
        return((bits[bits.size()-2]==0)?true:false);
        while(index<bits.size()){
            if(index<bits.size()-2){
                if(bits[index==1])
                index+=2;
                else
                index++;
            }
        }
        return(false);
        
    }
};