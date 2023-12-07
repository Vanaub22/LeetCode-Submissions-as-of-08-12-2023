// https://leetcode.com/problems/design-an-ordered-stream

class OrderedStream {
public:
    int turn=1,n;
    map<int,string> valueAtID;
    OrderedStream(int n) {
        this->n=n;
    }
    vector<string> insert(int idKey, string value) {
        vector<string> chunk;
        valueAtID[idKey]=value;
        for(;turn<=n;turn++)
        if(valueAtID[turn]!="") chunk.push_back(valueAtID[turn]);
        else break;
        return chunk;
    }
};
/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream* obj = new OrderedStream(n);
 * vector<string> param_1 = obj->insert(idKey,value);
 */