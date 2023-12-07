// https://leetcode.com/problems/evaluate-reverse-polish-notation

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int a,b;
        if(tokens.size()==1)
        return(stoi(tokens[0]));
        stack<int> operands;
        for(string token:tokens){
            if(isOperator(token)){
                b=operands.top();
                operands.pop();
                a=operands.top();
                operands.pop();
                operands.push(operation(a,b,token));
            }
            else
            operands.push(stoi(token));
        }
        return(operands.top());
    }
    bool isOperator(string c){
        return(c=="*"||c=="/"||c=="+"||c=="-");
    }
    int operation(int a, int b, string op){
        if(op=="*")
        return(a*b);
        else if(op=="/")
        return(a/b);
        else if(op=="+")
        return(a+b);
        return(a-b);
    }
};