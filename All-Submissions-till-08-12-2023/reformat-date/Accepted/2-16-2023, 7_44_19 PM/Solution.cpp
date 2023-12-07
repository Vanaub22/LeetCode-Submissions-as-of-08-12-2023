// https://leetcode.com/problems/reformat-date

class Solution {
public:
    string reformatDate(string date) {
        string year=date.substr(date.size()-4,4),month,day="0",month_str=date.substr(date.size()-8,3);
        if(isdigit(date[1]))
        day=date.substr(0,2);
        else
        day+=date[0];
        map<string,string> months={{"Jan","01"},{"Feb","02"},{"Mar","03"},{"Apr","04"},{"May","05"},{"Jun","06"},{"Jul","07"},{"Aug","08"},{"Sep","09"},{"Oct","10"},{"Nov","11"},{"Dec","12"}};
        month=months[month_str];
        return(year+"-"+month+"-"+day);
    }
};