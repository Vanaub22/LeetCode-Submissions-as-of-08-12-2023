// https://leetcode.com/problems/html-entity-parser

class Solution {
public:
    string entityParser(string text) {
        unordered_map<string,string> specialCharacters={{"&quot;","\""},{"&apos;","'"},{"&amp;","&"},{"&gt;",">"},{"&lt;","<"},{"&frasl;","/"}};
        int n=text.length();
        string ans="";
        for(int i=0;i<n;i++){
            if(text[i]=='&'){
                int initial=i;
                string entity="";
                while(i<n){
                    entity+=text[i];
                    if(text[i]==';') break;
                    i++;
                }
                if(specialCharacters[entity]!=""){
                    ans+=specialCharacters[entity];
                    continue;
                }
                else i=initial;
            }
            ans+=text[i];
        }
        return ans;
    }
};