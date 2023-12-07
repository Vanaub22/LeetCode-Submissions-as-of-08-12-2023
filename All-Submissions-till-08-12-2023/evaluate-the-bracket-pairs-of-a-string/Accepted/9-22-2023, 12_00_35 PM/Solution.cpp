// https://leetcode.com/problems/evaluate-the-bracket-pairs-of-a-string

class Solution {
public:
    unordered_map<string,string> makeMap(vector<vector<string>>& knowledge){
        unordered_map<string,string> umap;
        for(vector<string>& pair:knowledge) umap[pair[0]]=pair[1];
        return umap;
    }
    string evaluate(string s, vector<vector<string>>& knowledge) {
        int n=s.length();
        unordered_map<string,string> knowledge_map=makeMap(knowledge);
        string key,res="";
        bool open=false;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                key="";
                open=true;
                continue;
            }
            else if(s[i]==')'){
                if(knowledge_map.find(key)==knowledge_map.end()) res+="?";
                else res+=knowledge_map[key];
                open=false;
                continue;
            }
            if(open) key+=s[i];
            else res+=s[i];
        }
        return res;
    }
};