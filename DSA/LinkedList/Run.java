package LinkedList;

public class Run {
    public static void main(String[] args) {
        LinkedList linkedList = new LinkedList();
        linkedList.insert(2);
        linkedList.insert(1);
        linkedList.insert(3);
        linkedList.insert(4);
        linkedList.insert(5);
        linkedList.show();
        System.out.println();
        linkedList.insertAtFirst(11);
        linkedList.show();
        System.out.println();
        linkedList.insertAt(2, 77);
        linkedList.show();

    }
}
