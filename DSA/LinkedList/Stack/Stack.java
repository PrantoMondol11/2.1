import LinkedList.LinkedList;

public class Stack {
    public LinkedList list = new LinkedList();
    public void push (int data){
        list.insertAtFirst(data);

    }
    public void pop (){
        list.removeFirst();
    }
    public void display(){
        list.show();
    }
    public static void main(String[] args) {
        Stack s = new Stack();
        s.push(3);
        s.push(4);
        s.push(6);
        s.display();
    }
}
