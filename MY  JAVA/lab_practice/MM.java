package lab_practice;

public class MM {
    public static void main(String[] args) {
        // Create a ScoreBoard with capacity 5
        ScoreBoard scoreboard = new ScoreBoard(4);

        // Create some Game_entry objects
        Game_entry g1 = new Game_entry(500, "Player 1");
        Game_entry g2 = new Game_entry(300, "Player 2");
        Game_entry g3 = new Game_entry(400,"Player 3");
        Game_entry g4 = new Game_entry(700, "Player 4");

        // Add entries to the scoreboard
        scoreboard.add(g1);
        scoreboard.add(g2);
        scoreboard.add(g3);
        scoreboard.add(g4);

        // Print the scoreboard
        System.out.println("After adding entries:");
        scoreboard.Show();
        scoreboard.remove(2);
        scoreboard.Show();
        
    }
}
