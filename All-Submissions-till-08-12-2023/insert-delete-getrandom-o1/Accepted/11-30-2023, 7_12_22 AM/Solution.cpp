// https://leetcode.com/problems/insert-delete-getrandom-o1

class RandomizedSet {
public:
    // We would need to involve a vector just for the getRandom function
    // Insertion, Lookup, Deletion etc. in O(1) could have been done using map only
    vector<int> v;
    unordered_map<int,int> umap;
    
    bool insert(int val) {
        if(umap.find(val)!=umap.end()) return false;
        v.emplace_back(val);
        umap[val]=v.size()-1;
        return true;
    }
    
    bool remove(int val) {
        if(umap.find(val)==umap.end()) return false;
        int last_element=v.back();
        umap[last_element]=umap[val];
        v[umap[val]]=last_element;
        v.pop_back();
        umap.erase(val);
        return true;
    }
    
    int getRandom() {
        return v[rand()%v.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */