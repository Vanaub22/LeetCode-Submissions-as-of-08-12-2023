// https://leetcode.com/problems/unique-email-addresses

class Solution {
public:
    string reducedMail(string email){
        int i=0,plus=-1;
        while(email[i]!='@'){
            if(email[i]=='.'){
            email.erase(email.begin()+i);
            i--;
            }
            if(email[i]=='+' && plus==-1)
            plus=i;
            i++;
        }
        if(plus==-1)
        return(email.substr(0,i)+email.substr(i+1,email.length()-1-i));
        return(email.substr(0,plus)+email.substr(i+1,email.length()-1-i));
    }
    int numUniqueEmails(vector<string>& emails) {
        set<string> addresses;
        for(string email:emails)
        addresses.insert(reducedMail(email));
        return(addresses.size());
    }
};