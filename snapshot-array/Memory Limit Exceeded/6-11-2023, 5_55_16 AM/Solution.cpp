// https://leetcode.com/problems/snapshot-array

class SnapshotArray {
public:
    int snap_no;
    vector<int> ds;
    unordered_map<int,vector<int>> snapshots;
    SnapshotArray(int length) {
        snap_no=-1;
        for(int i=0;i<length;i++)
        ds.push_back(0);
    }
    void set(int index, int val) {
        ds[index]=val;
    }
    int snap() {
        snap_no++;
        snapshots[snap_no]=ds;
        return(snap_no);
    }
    int get(int index, int snap_id) {
        return(snapshots[snap_id][index]);   
    }
};
/**
 * Your SnapshotArray object will be instantiated and called as such:
 * SnapshotArray* obj = new SnapshotArray(length);
 * obj->set(index,val);
 * int param_2 = obj->snap();
 * int param_3 = obj->get(index,snap_id);
 */