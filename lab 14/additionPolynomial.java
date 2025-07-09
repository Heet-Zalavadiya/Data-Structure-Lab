class Node {
    int coeff;
    int pow;
    Node next;

    Node(int a, int b) {
        coeff = a;
        pow = b;
        next = null;
    }
}

class Solution {
    public static Node addPolynomial(Node head1, Node head2) {

        Node curr1 = head1;
        Node curr2 = head2;

        Node curr3 = null;
        Node head3 = null;

        while (curr1 != null && curr2 != null) {
            Node newNode = null;

            if (curr1.pow > curr2.pow) {
                newNode = new Node(curr1.coeff, curr1.pow);
                curr1 = curr1.next;
            } else if (curr1.pow == curr2.pow) {
                newNode = new Node(curr1.coeff + curr2.coeff, curr1.pow);
                curr1 = curr1.next;
                curr2 = curr2.next;
            } else if (curr1.pow < curr2.pow) {
                newNode = new Node(curr2.coeff, curr2.pow);
                curr2 = curr2.next;
            }
            if (head3 == null) {
                head3 = newNode;
                curr3 = newNode;
            } else {
                curr3.next = newNode;
                curr3 = newNode;
            }
        }
        if (curr1 != null) {
            while (curr1 != null) {
                Node newNode = new Node(curr1.coeff, curr1.pow);
                curr3.next = newNode;
                curr3 = newNode;
                curr1 = curr1.next;
            }
        }

        if (curr2 != null) {
            while (curr2 != null) {
                Node newNode = new Node(curr2.coeff, curr2.pow);
                curr3.next = newNode;
                curr3 = newNode;
                curr2 = curr2.next;
            }
        }

        return head3;
    }
}