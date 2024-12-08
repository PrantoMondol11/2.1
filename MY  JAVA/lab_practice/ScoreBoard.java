package lab_practice;

public class ScoreBoard {
    private int numEnt = 0; // Tracks number of entries
    Game_entry[] board; // Array to hold Game_entry objects

    public ScoreBoard(int capacity) {
        board = new Game_entry[capacity];
    }

    // Add a new game entry 
    public void add(Game_entry g) {
        int newS = g.getScore();

        // Check if there is space or the new score should be added
        if (numEnt < board.length || newS > board[numEnt - 1].getScore()) {
            // Increment the number of entries if there is space
            if (numEnt < board.length) {
                numEnt++;
            }

            // Shift entries to make room for the new entry
            int j = numEnt - 1;
            while (j > 0 && board[j - 1].getScore() < newS) {
                board[j] = board[j - 1]; // Shift the entry to the right
                j--;
            }

            board[j] = g; // Insert the new game entry in the correct position
        }
    }
    public Game_entry remove(int i) throws IndexOutOfBoundsException{

        if(i<0||i>=numEnt){
            throw new IndexOutOfBoundsException("Error"+i);
        
        }
        Game_entry temp=board[i];
        for(int j=i;j<numEnt;j++){
            
            board[j]=board[j+1];
            board[numEnt-1]=null;
            numEnt--;
    
        }
        return temp;

        
        
    }
    public void Show(){
        for (int i=0;i<numEnt;i++){
            System.out.println(i+1+"Name:"+board[i].getName()+"Score:"+board[i].getScore());
        }
    }
}
