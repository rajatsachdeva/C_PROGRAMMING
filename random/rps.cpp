#include<iostream>

using std::cout; 
using std::cin; 
using std::endl; 
using std::boolalpha;

#define ROCK            1
#define PAPER           2
#define SCISSORS        3

#define TIE             0
#define PLAYER1_WON     1
#define PLAYER2_WON     2

#define PLAYER1         1
#define PLAYER2         2

// add any other includes you need. Up to you
/*
for this we will use:
1 - rock
2 - paper
3 - scissors
*/
// PUT YOUR FUNCTIONS BELOW THIS LINE
// MAIN IS BELOW, DON'T CHANGE

/*
 * Function: strategy1
 *  Cycles through the following order, in accordance to player's previous play
 *  Rock(1) -> Paper(2) -> Scissors(3) -> Rock(1) 
 * 
 * Input:
 *  long player:
 *   player 1 or 2
 * 
 *  long previous_result
 *    Tie(0), player 1 won(1), player 2 won(2)
 * 
 *  long previous_play
 *    last move played by player Rock(1), Paper(2) or Scissors(3)
 * 
 * long opponent_play
 *    oppenent's last played move i.e Rock(1), Paper(2) or Scissors(3)   
 *
 * Return: int 
 *  Next move made by the player i.e. Rock(1), Paper(2) or Scissors(3)
 */
int strategy1(long player, long previous_result, long previous_play, long opponent_play) {

    if (previous_play == ROCK) {
        return PAPER;
    } else if (previous_play == PAPER) {
        return SCISSORS;
    } else { // else if its the case of SCISSORS
        return ROCK;       
    }
}

/*
 * Function: strategy2
 *  Stick or switch strategy
 *  if player won/tied last time then use previously used move
 *  Otherwise choose opponent's move
 * 
 * Input:
 *  long player:
 *   player 1 or 2
 * 
 *  long previous_result
 *    Tie(0), player 1 won(1), player 2 won(2)
 * 
 *  long previous_play
 *    last move played by player Rock(1), Paper(2) or Scissors(3)
 * 
 * long opponent_play
 *    oppenent's last played move i.e Rock(1), Paper(2) or Scissors(3)   
 *
 * Return: int 
 *  Next move made by the player i.e. Rock(1), Paper(2) or Scissors(3)
 */
int strategy2(long player, long previous_result, long previous_play, long opponent_play) {
    if(player == PLAYER1) {
        // if player1 won/ tied in previous play
        if (previous_result == TIE || previous_result == PLAYER1_WON) {
            return previous_play;
        } else {
            return opponent_play;
        }
    } else { // its player2
        if (previous_result == TIE || previous_result == PLAYER2_WON) {
            return previous_play;
        } else {
            return opponent_play;
        }
    }
}

/*
 * Function: strategy3
 *  Stick or win strategy
 *  if player won/tied last time then use previously used move
 *  Otherwise return move that would beat opponent's previous play
 * 
 * Input:
 *  long player:
 *   player 1 or 2
 * 
 *  long previous_result
 *    Tie(0), player 1 won(1), player 2 won(2)
 * 
 *  long previous_play
 *    last move played by player Rock(1), Paper(2) or Scissors(3)
 * 
 * long opponent_play
 *    oppenent's last played move i.e Rock(1), Paper(2) or Scissors(3)   
 *
 * Return: int 
 *  Next move made by the player i.e. Rock(1), Paper(2) or Scissors(3)
 */
int strategy3(long player, long previous_result, long previous_play, long opponent_play) {
    if (player == PLAYER1) {
        if(previous_result == TIE || previous_result == PLAYER1_WON) {
            return previous_play;
        } else {
            if (opponent_play == ROCK) {
                return PAPER;
            } else if (opponent_play == PAPER) {
                return SCISSORS;
            } else {// its SCISSORS 
                return ROCK;                    
            }
        }

    } else { // its player2
        if(previous_result == TIE || previous_result == PLAYER2_WON) {
            return previous_play;
        } else {
            if (opponent_play == ROCK) {
                return PAPER;
            } else if (opponent_play == PAPER) {
                return SCISSORS;
            } else { // its SCISSORS 
                return ROCK;                    
            }
        }
    }
}

int score_round (int player1_move, int player2_move) {
    if(player1_move == player2_move) {
        return TIE;
    } else {
        if(player1_move == ROCK && player2_move == PAPER) {
            return PLAYER2_WON;
        } else if (player1_move == PAPER && player2_move == ROCK) {
            return PLAYER1_WON;
        } else if (player1_move == ROCK && player2_move == SCISSORS) {
            return PLAYER1_WON;
        } else if (player1_move == SCISSORS && player2_move == ROCK) {
            return PLAYER2_WON;
        } else if (player1_move == SCISSORS && player2_move == PAPER) {
            return PLAYER1_WON;
        } else /*if (player1_move == PAPER && player2_move == SCISSORS)*/ {
            return PLAYER2_WON;
        }
    }
}

int main() {
    cout << boolalpha; // print true or false for bools
    int test;
    cin >> test;
  
    switch (test) {
    case 1 : { // strategy 1
            long player, previous_result, previous_play, opponent_play;
            cin >> player >> previous_result >> previous_play >> opponent_play;
            cout << strategy1(player, previous_result, previous_play, opponent_play) << endl;
            break;
            } // of case 1

    case 2:{ // strategy 2
            long player, previous_result, previous_play, opponent_play;
            cin >> player >> previous_result >> previous_play >> opponent_play;
            cout << strategy2(player, previous_result, previous_play, opponent_play) << endl;
            break;
            } // of case 2

    case 3: { // strategy 3
            long player, previous_result, previous_play, opponent_play;
            cin >> player >> previous_result >> previous_play >> opponent_play;
            cout << strategy3(player, previous_result, previous_play, opponent_play) << endl;
            break;
            } // of case 3

    case 4: { // score result
            long p1, p2;
            cin >> p1 >> p2;
            cout << score_round(p1, p2) << endl;   
            break;
            } // of case 4
  
    } // of switch
} // of main