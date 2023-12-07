// https://leetcode.com/problems/double-a-number-represented-as-a-linked-list

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
    public ListNode doubleIt(ListNode head) {
        Stack<ListNode> nodeStack=new Stack<>();
        ListNode temp=head;
        while(temp!=null) {
            nodeStack.push(temp);
            temp=temp.next;
        }
        int carry=0;
        while(!nodeStack.empty()) {
            ListNode node=nodeStack.pop();
            node.val*=2;
            node.val+=carry;
            if(node.val/10==0) carry=0;
            else {
                carry=node.val/10;
                node.val%=10;
            }
        }
        if(carry>0) {
            ListNode newNode=new ListNode(carry);
            newNode.next=head;
            head=newNode;
        }
        return head;
    }
}