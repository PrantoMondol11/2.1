package lab_practice;

public class Game_entry {
    private int score;
    private String name;
    public Game_entry(int score,String name){
        this.name=name;
        this.score=score;
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
