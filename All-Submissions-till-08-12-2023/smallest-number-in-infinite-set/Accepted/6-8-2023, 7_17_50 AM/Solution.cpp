// https://leetcode.com/problems/smallest-number-in-infinite-set

class SmallestInfiniteSet {
public:
    int currentSmallest;
    set<int> st;
    SmallestInfiniteSet() {
        currentSmallest=1;
    }
    int popSmallest() {
        int popped;
        if(!st.empty()){
            popped=*st.begin();
            st.erase(st.begin());
        }
        else{
            popped=currentSmallest;
            currentSmallest+=1;
        }
        return(popped);
    }
    void addBack(int num) {
        if(currentSmallest>num)
        st.insert(num);   
    }
};
/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */