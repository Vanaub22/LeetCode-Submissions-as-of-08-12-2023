// https://leetcode.com/problems/day-of-the-year

class Solution {
public:
    int dayOfYear(string date) {
        int month=stoi(date.substr(5,2)),day=stoi(date.substr(8,2)),year=stoi(date.substr(0,4));
        int days_arr[]={31,28,31,30,31,30,31,31,30,31,30,31};
        if((year%100==0 & year%400==0)||(year%100!=0 && year%4==0))
        days_arr[1]=29;
        for(int i=0;i<month-1;i++)
        day+=days_arr[i];
        return(day);
        }
};