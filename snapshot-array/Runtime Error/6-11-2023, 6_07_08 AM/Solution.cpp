// https://leetcode.com/problems/snapshot-array

class SnapshotArray {
public:
    int snap_no=0;
    vector<vector<int>> ds;
    SnapshotArray(int length) {
        for(int i=0;i<length;i++)
        ds.push_back({});
    }
    void set(int index, int val) {
        ds[snap_no]={index,val};
    }
    int snap() {
        snap_no++;
        return(snap_no-1);
    }
    int get(int index, int snap_id) {
        return(ds[snap_id][1]);
    }
};
/**
 * Your SnapshotArray object will be instantiated and called as such:
 * SnapshotArray* obj = new SnapshotArray(length);
 * obj->set(index,val);
 * int param_2 = obj->snap();
 * int param_3 = obj->get(index,snap_id);
 */