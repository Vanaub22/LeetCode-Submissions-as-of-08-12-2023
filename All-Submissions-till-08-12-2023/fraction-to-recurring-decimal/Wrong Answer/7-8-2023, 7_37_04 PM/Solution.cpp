// https://leetcode.com/problems/fraction-to-recurring-decimal

class Solution {
public:
    string fractionToDecimal(int numerator, int denominator) {
        if(!numerator) return "0";
        string str="";
        numerator=abs(numerator),denominator=abs(denominator);
        if(numerator<0 && denominator>0 || numerator>0 && denominator<0) str+="-";
        long long quotient=numerator/denominator,remainder=numerator%denominator;
        str+=to_string(quotient);
        if(remainder==0) return str;
        str.push_back('.');
        unordered_map<long long,int> afterPoint;
        while(remainder>0)
        if(afterPoint.find(remainder)!=afterPoint.end()){
            str.insert(afterPoint[remainder],"(");
            str.push_back(')');
            break;
        }
        else{
            afterPoint[remainder]=str.length();
            remainder*=10;
            quotient=remainder/denominator;
            remainder%=denominator;
            str+=to_string(quotient);
        }
        return str;
    }
};