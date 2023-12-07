// https://leetcode.com/problems/number-of-days-between-two-dates

class Solution {
public:
    int formatted(string date){
        int year=stoi(date.substr(0,4)),month=stoi(date.substr(5,2)),day=stoi(date.substr(8,2)),days=0,days_in_month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
        if(leap(year)) days_in_month[1]=29;
        for(int i=1900;i<year;i++){
            if(leap(i)) days+=366;
            else days+=365;
        }
        for(int i=1;i<=month;i++) days+=days_in_month[i-1];
        return days+day;
    }
    bool leap(int year){
        return year%100==0?year%400==0:year%4==0;
    }
    int daysBetweenDates(string date1, string date2) {
        return abs(formatted(date1)-formatted(date2));
    }
};