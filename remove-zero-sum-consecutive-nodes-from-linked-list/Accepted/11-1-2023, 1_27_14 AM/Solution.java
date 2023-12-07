// https://leetcode.com/problems/remove-zero-sum-consecutive-nodes-from-linked-list

/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode removeZeroSumSublists(ListNode head) {
        Map<Integer,ListNode> pref=new HashMap<>();
        // Adding an extra node so that the reference is not lost if the head node is deleted
        int prefSum=0;
        ListNode extra=new ListNode(0,head),temp=extra;
        // Calculating Prefix Sums and linking them to corresponding nodes
        while(temp!=null) {
            prefSum+=temp.val;
            pref.put(prefSum,temp); // Eventually gets to the last node with that prefix sum
            temp=temp.next;
        }
        prefSum=0;
        temp=extra;
        while(temp!=null) {
            prefSum+=temp.val;
            temp.next=pref.get(prefSum).next; // Deleting all 0-sum nodes in between
            temp=temp.next;
        }
        return extra.next;
    }
}