// https://leetcode.com/problems/html-entity-parser

class Solution {
public:
    string entityParser(string text) {
        unordered_map<string,string> specialCharacters={{"&quot;","\""},{"&apos;","'"},{"&amp;","&"},{"&gt;",">"},{"&lt;","<"},{"&frasl;","/"}};
        int n=text.length();
        string ans="";
        for(int i=0;i<n;i++){
            if(text[i]=='&'){
                string entity="";
                while(i<n){
                    entity+=text[i];
                    if(text[i]==';') break;
                    i++;
                }
                ans+=(specialCharacters[entity]!="")?specialCharacters[entity]:entity;
            }
            else ans+=text[i];
        }
        return ans;
    }
};