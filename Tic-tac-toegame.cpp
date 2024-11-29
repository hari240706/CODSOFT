#include <iostream>
using namespace std;

char b[3][3];
char u;

void initializeboard() {
    u = 'X';
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            b[i][j] = '1' + i * 3 + j; // Fill with numbers 1-9
        }
    }
}

void displayboard() {
    cout << "\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\n";
}

bool checkwin() {
    for (int i = 0; i < 3; i++) {
        if (b[i][0] == b[i][1] && b[i][1] == b[i][2]) 
			return true;
        if (b[0][i] == b[1][i] && b[1][i] == b[2][i]) 
			return true;
    }
    if (b[0][0] == b[1][1] && b[1][1] == b[2][2]) 
		return true;
    if (b[0][2] == b[1][1] && b[1][1] == b[2][0]) 
		return true;
    return false;
}

bool checkdraw() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (b[i][j] != 'X' && b[i][j] != 'O') 
				return false;
        }
    }
    return true;
}

void switchplayer() {
    u = (u == 'X') ? 'O' : 'X';
}

void tictactoe() {
    int m;
    bool g = true;

    initializeboard();
    cout << "Welcome to Tic-Tac-Toe!" << endl;

    while (g) {
        displayboard();
        cout << "Player " << u << ", enter your move (1-9): "; //gets move from user
        cin >> m;

        int r = (m - 1) / 3;
        int c = (m - 1) % 3;

        if (m >= 1 && m <= 9 && b[r][c] != 'X' && b[r][c] != 'O') {
            b[r][c] = u;
            if (checkwin()) {
                displayboard();
                cout << "Player " << u << " Wins! Congratulations!" << endl; //display winner
                g = false;
            } else if (checkdraw()) {
                displayboard();
                cout << "It's a draw!" << endl; //display draw
                g = false;
            } else {
                switchplayer();
            }
        } else {
            cout << "Invalid move. Please Try again." << endl; //display if user enters invalid move
        }
    }
}

int main() {
    tictactoe(); //calling function
    return 0;
}