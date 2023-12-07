// https://leetcode.com/problems/insert-delete-getrandom-o1

class RandomizedSet {
public:
    unordered_map<int,int> listIndex;
    vector<int> list;
    RandomizedSet() {
        listIndex.clear();
        list.clear();
    }
    bool insert(int val) {
        if(listIndex.find(val)!=listIndex.end()) return false;
        listIndex[val]=list.size();
        list.push_back(val);
        return true;
    }
    bool remove(int val) {
        if(listIndex.find(val)==listIndex.end()) return false;
        list[listIndex[val]]=list.back();
        list.pop_back();
        return true;
    }
    int getRandom() {
        return list[rand()%list.size()];
    }
};
/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */