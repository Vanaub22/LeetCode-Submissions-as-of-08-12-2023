// https://leetcode.com/problems/find-mode-in-binary-search-tree

/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    static void traversal(TreeNode root,Map<Integer,Integer> freq) {
        if(root==null) return;
        if(freq.containsKey(root.val)) freq.put(root.val,freq.get(root.val)+1);
        else freq.put(root.val,1);
        traversal(root.left,freq);
        traversal(root.right,freq);
    }
    public int[] findMode(TreeNode root) {
        Map<Integer,Integer> freq=new HashMap<>();
        traversal(root,freq);
        ArrayList<Integer> modeList=new ArrayList<>();
        int maxFreq=-1;
        for(int x:freq.keySet()) {
            if(freq.get(x)>=maxFreq) {
                if(freq.get(x)>maxFreq) {
                    modeList.clear();
                    maxFreq=freq.get(x);
                }
                modeList.add(x);
            }
        }
        int idx=0,modes[]=new int[modeList.size()];
        for(int i:modeList) modes[idx++]=i;
        return modes;
    }
}