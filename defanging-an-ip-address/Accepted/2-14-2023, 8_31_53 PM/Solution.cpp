// https://leetcode.com/problems/defanging-an-ip-address

class Solution {
public:
    string defangIPaddr(string address) {
        for(int i=0;i<address.size();i++){
            if(address[i]=='.'){
                address.insert(i,"[");
                address.insert(i+2,"]");
                i++;
            }
        }
        return(address);
    }
};