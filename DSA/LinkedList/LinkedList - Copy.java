package LinkedList;

public class LinkedList {
    Node head;
    public void insert(int data){
        Node node =new Node();
        node.data=data;
        if(head==null){
            head=node;
        }
        else{
            Node n=head;
            while(n.next!=null){
                n=n.next;
            }
            n.next=node;
        }
    }
    public void show(){
        Node temp=head;
        while(temp.next!=null){
            System.out.println(temp.data);
            temp=temp.next;
        }
        System.out.println(temp.data);
    }
    public void insertAtFirst(int data){
        Node n1=new Node();
        n1.data=data;
        n1.next=head;
        head=n1;
    }
    public void insertAt(int index,int data){
        Node n =new Node();
        n.data=data;
        Node temp=head;
        for(int i=0;i<index-1;i++){
            temp=temp.next;
        }
        n.next=temp.next;
        temp.next=n;
    }
}
