// https://leetcode.com/problems/html-entity-parser

class Solution {
public:
    string entityParser(string code) {
        unordered_map<string,string> specialCharacters={{"&quot;","\""},{"&apos;","'"},{"&amp;","&"},{"&gt;",">"},{"&lt;","<"},{"&frasl;","/"}};
        int n=code.length();
        string text="";
        for(int i=0;i<n;i++){
            if(code[i]=='&'){
                int initial=i;
                string entity="";
                while(i<n){
                    entity+=code[i];
                    if(code[i]==';') break;
                    i++;
                }
                if(specialCharacters[entity]!=""){
                    text+=specialCharacters[entity];
                    continue;
                }
                else i=initial;
            }
            text+=code[i];
        }
        return text;
    }
};