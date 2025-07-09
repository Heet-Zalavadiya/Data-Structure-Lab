
 class Node {
   int data;
    Node next;
    Node(int d)  { data = d;  next = null; }
}


class Solution {
    public Pair<Node, Node> splitList(Node head) {
        // Code here
        if (head == null || head.next == head) {
            return new Pair<>(head, null); 
        }
        Node slow = head;
        Node fast = head;
        while(fast.next!= head && fast.next.next !=head){
            slow = slow.next;
            fast = fast.next.next;
        }
        if(fast.next.next == head){
            fast = fast.next;
        }
        Node first = head;
        Node second = slow.next;
        slow.next = first;
        fast.next = second;
        return new Pair<>(first, second);
    }
}