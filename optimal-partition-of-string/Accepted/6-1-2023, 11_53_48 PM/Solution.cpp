// https://leetcode.com/problems/optimal-partition-of-string

class Solution {
public:
    int partitionString(string s) {
        set<char> st;
        int partitions=1;
        for(char c:s)
        if(st.find(c)==st.end())
        st.insert(c);
        else{
            partitions++;
            st.clear();
            st.insert(c);
        }
        return(partitions);
    }
};