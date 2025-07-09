class Node {
    int data;
    Node next;

    public Node(int data){
        this.data = data;
    }
}

class Solution {
    public void deleteAlt(Node head) {
        // Code Here
        if(head == null || head.next == null){
            return;
        }
        Node prev = head;
        Node curr = head.next;
        
        while(curr != null){
            prev.next = curr.next;
            curr.next = null;
            prev = prev.next;
            
            if(prev == null) break;
            
            curr = prev.next;
        }
    }
}