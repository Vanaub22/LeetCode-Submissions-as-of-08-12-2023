// https://leetcode.com/problems/maximize-area-of-square-hole-in-grid

class Solution {
public:
    int maximizeSquareHoleArea(int n, int m, vector<int>& hBars, vector<int>& vBars) {
//         set<int> s1,s2;
        // Will try this approach later
//         for(int i=1;i<=n+2;i++) s1.insert(i);
//         for(int i=1;i<=m+2;i++) s2.insert(i);
        
//         for(int i:hBars) s1.erase(i);
//         for(int i:vBars) s2.erase(i);
        
//         vector<int> l1(s1.begin(),s1.end());
//         vector<int> l2(s2.begin(),s2.end());
//         sort(l1.begin(),l1.end());
//         sort(l2.begin(),l2.end());

//         cout<<"l1"<<endl;
//         for(int i:l1) cout<<i<<" ";
//         cout<<endl;
        
//         cout<<"l2"<<endl;
//         for(int i:l2) cout<<i<<" ";
//         cout<<endl;
        
//         int l=l1.size(),h_max=0,v_max=0;
//         for(int i=0;i<l-1;i++) h_max=max(h_max,l1[i+1]-l1[i]);
//         l=l2.size();
//         for(int i=0;i<l-1;i++) v_max=max(v_max,l2[i+1]-l2[i]);
//         return h_max*v_max;
        
        int a=hBars.size(),b=vBars.size();
        sort(hBars.begin(),hBars.end());
        sort(vBars.begin(),vBars.end());
        int cnt=1,hCnt=1,vCnt=1;
        for(int i=1;i<a;i++) {
            if(hBars[i]==hBars[i-1]+1) cnt++;
            else cnt=1;
            hCnt=max(hCnt,cnt);
        }
        cnt=1;
        for(int i=1;i<b;i++) {
            if(vBars[i]==vBars[i-1]+1) cnt++;
            else cnt=1;
            vCnt=max(vCnt,cnt);
        }
        return pow((min(hCnt,vCnt)+1),2);
    }
};