// https://leetcode.com/problems/convert-the-temperature

class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> ans={(celsius+273.15),(((9.0/5.0)*celsius)+32.0)};
        return(ans);
    }
};