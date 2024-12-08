#include <bits/stdc++.h>
using namespace std;

using namespace std;

bool playGame(int n) {
    bool isEveniusTurn = true; // Evenius starts the game

    while (n > 0) {
        int maxRemove = n / 2; // Maximum stones that can be removed this turn

        if (isEveniusTurn) {
            // Evenius's turn: he can only remove an even number up to maxRemove
            if (maxRemove < 2) return false; // If Evenius can't move, he loses
            n -= 2; // Remove the minimum even number (2)
        } else {
            // Oddius's turn: he can only remove an odd number up to maxRemove
            if (maxRemove < 1) return true; // If Oddius can't move, he loses
            n -= 1; // Remove the minimum odd number (1)
        }

        // Switch turns
        isEveniusTurn = !isEveniusTurn;
    }

    // If n reaches zero, the last player to move loses
    return !isEveniusTurn;
}

int main() {
   int t;
   int N=998244353;
   cin>>t;
   while(t--)
   {
    int x,y;
    cin>>x;
    cout<<x%N<<endl;

    
   }

    return 0;
}
