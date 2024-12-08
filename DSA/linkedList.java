public class linkedList{
public static class Node{
    int data;
    Node next;
    Node (int data){
        this.data=data;
    }
}

public static void main(String[] args) {
    Node a1= new Node (5);
    Node a2= new Node (33);
    Node a3= new Node (4);
    Node a4= new Node (6);
    a1.next=a2;
    a2.next=a3;
    a3.next=a4;
    Node temp=a1;
    for (int i=0;i<=4;i++){
        System.out.println(temp.data+" ");
        temp=temp.next;
    }
}

}