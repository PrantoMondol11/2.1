package lab_practice;

public class game {
    private int score;
    private String name;
    public game(int score,String name){
        this.name=name;
        this.name=name;
    }
    public String getName(){
        return name;
    }
    public int getScore(){
        return score;

    }
    public String toString(){
        return "("+name +", "+score+")";
    }
}
