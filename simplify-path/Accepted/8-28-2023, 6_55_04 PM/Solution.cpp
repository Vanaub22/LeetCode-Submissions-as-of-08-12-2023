// https://leetcode.com/problems/simplify-path

class Solution {
public:
    string simplifyPath(string path) {
        int n=path.size();
        stack<string> st;
        string simplified_path="";
        for(int i=0;i<n;i++){
            if(path[i]=='/') continue;
            string name="";
            while(i<n && path[i]!='/'){
                name+=path[i];
                i++;
            }
            if(name==".") continue;
            else if(name==".."){
                if(!st.empty()) st.pop();
            }
            else st.push(name); 
        }
        if(st.empty()) return "/";
        while(!st.empty()){
            simplified_path='/'+st.top()+simplified_path;
            st.pop();
        }
        return simplified_path;
    }
};