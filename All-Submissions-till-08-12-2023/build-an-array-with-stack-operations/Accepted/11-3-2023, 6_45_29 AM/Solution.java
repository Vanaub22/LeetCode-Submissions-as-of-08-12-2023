// https://leetcode.com/problems/build-an-array-with-stack-operations

class Solution {
    public List<String> buildArray(int[] target, int n) {
        List<String> ops = new ArrayList<>();
        int L=target.length,j=0;
        for(int i=1;i<=n && j<L;i++) {
            ops.add("Push");
            if(target[j]!=i) ops.add("Pop");
            else j++;
        }
        return ops;
    }
}