// https://leetcode.com/problems/subdomain-visit-count

class Solution {
public:
    // Helper function to find all the associated subdomains for a domain
    vector<string> findAllSubdomains(string cpdomain) {
        int n=cpdomain.length();
        string subdomain;
        vector<string> subdomains;
        for(int i=n-1;i>=0;i--) {
            if(cpdomain[i]=='.' || cpdomain[i]==' ') {
                string sd=subdomain; // Temporary assignment for reversal
                reverse(sd.begin(),sd.end()); // Iteration is in Reverse
                subdomains.emplace_back(sd);
                if(cpdomain[i]==' ') break;
            }
            subdomain+=cpdomain[i];
        }
        return subdomains;
    }
    vector<string> subdomainVisits(vector<string>& cpdomains) {
        unordered_map<string,int> domainVisits; // Storing individual domain visits
        for(string cpdomain:cpdomains) {
            // Finding all subdomains using Helper function
            vector<string> subdomains=findAllSubdomains(cpdomain);
            // Finding the number of visits
            int visits=0;
            for(char c:cpdomain) if(c==' ') break;
            else visits=(visits*10)+c-'0';
            for(string subdomain:subdomains) domainVisits[subdomain]+=visits;
        }
        vector<string> allVisits;
        for(auto it:domainVisits) 
        allVisits.emplace_back(to_string(it.second)+" "+it.first);
        return allVisits;

    }
};