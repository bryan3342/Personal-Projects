#include <iostream>
#include <stdlib.h>
using namespace std;

bool draw = false;
char board[9] = {'1','2','3','4','5','6','7','8','9'};
char turn = 'X';
int choice = 0;
int winCounterPlayerOne, winCounterPlayerTwo;

void board_display(){
    cout << "\n===============";
    cout << "\n    |    |    " << endl;
    cout << " " << board[0] << "  | " << board[1] << "  | " << board[2] << "  " << endl;
    cout << "____|____|____" << endl;
    cout << "    |    |    " << endl;
    cout << " " << board[3] << "  | " << board[4] << "  | " << board[5] << endl;
    cout << "____|____|____" << endl;
    cout << "    |    |    " << endl;
    cout << " " << board[6] << "  | " << board[7] << "  | " << board[8] << "  " << endl;
    cout << "    |    |    " << endl;
    cout << "===============" << endl;
}

void playerChoice(){
    if(turn == 'X'){
        cout << "Player 1's Turn = ";
    }
    else if(turn == 'O'){
        cout << "Player 2's Turn = ";    
    }

    cin >> choice;

    if(choice > 9){
        cout << "Invalid Move Choice, Please Select again." << endl;
        playerChoice();
    }
    else if(turn == 'X' && board[choice - 1] != 'X' && board[choice - 1] != 'O'){
        board[choice - 1] = 'X';
        turn = 'O';
    }

    else if(turn == 'O' && board[choice - 1] != 'O' && board[choice - 1] != 'X'){
        board[choice - 1] = 'O';
        turn = 'X';
    }

    else {
        cout << "Box already in use! Try again!" << endl;
        playerChoice();
   
    }
    board_display();
}


bool gameOver(){

    if(board[0] == board[1] && board[0] == board[2] || board[3] == board[4] && board[3] == board[5] || board[6] == board[7] && board[6] == board[8]){
        return false;
    }
    
    if(board[0] == board[3] && board[0] == board[6] || board[1] == board[4] && board[1] == board[7] || board[2] == board[5] && board[2] == board[8]){
        return false;
    }
    
    if(board[0] == board[4] && board[0] == board[8] || board[2] == board[4] && board[2] == board[6]){
        return false;
    }

        return true;

    for(int i=0; i < 9; i++) 
        if(board[i] != 'X' || board[i] != 'O')
        return true;

        draw = true;
        return false;
}

int main(){

    string playerOne, playerTwo;
    bool winCounter;
    int boardPosition;

    cout << "TIC TAC TOE by Bryan Mejia" << endl;
    cout << "=============================\n";
    
    cout << "Player 1's Name is = \n";
    getline(cin, playerOne);
    cout << "Player 2's Name is =\n";
    getline(cin,playerTwo);
    cout << "\n";

    cout << "==============================" << endl;
    cout << "Player 1 : X \tPlayer 2 : O" << endl;

    while(gameOver()){
        board_display();
        playerChoice();
        gameOver();
    }

    if(draw == true) {
        cout << "GAME DRAW!" << endl;
    }

    cout << "You won! Congratulations!" << endl;
    

    return 0;
}