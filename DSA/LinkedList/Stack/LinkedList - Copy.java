package LinkedList;

public class LinkedList {
    Node head;

    // Inner Node class
    public static class Node {
        int data;
        Node next;
    }

    public void insert(int data) {
        Node node = new Node();
        node.data = data;
        if (head == null) {
            head = node;
        } else {
            Node n = head;
            while (n.next != null) {
                n = n.next;
            }
            n.next = node;
        }
    }

    public void show() {
        if (head == null) {
            System.out.println("List is empty.");
            return;
        }

        Node temp = head;
        while (temp != null) {
            System.out.println(temp.data);
            temp = temp.next;
        }
    }

    public void insertAtFirst(int data) {
        Node n1 = new Node();
        n1.data = data;
        n1.next = head;
        head = n1;
    }

    public void insertAt(int index, int data) {
        if (index == 0) {
            insertAtFirst(data);
            return;
        }

        Node n = new Node();
        n.data = data;

        Node temp = head;
        for (int i = 0; i < index - 1; i++) {
            if (temp == null) {
                System.out.println("Index out of bounds.");
                return;
            }
            temp = temp.next;
        }

        n.next = temp.next;
        temp.next = n;
    }

    public void removeFirst() {
        if (head == null) {
            System.out.println("List is already empty.");
        } else {
            head = head.next;
        }
    }
}
