#include <iostream>
using namespace std;

char game[3][3];

// Initialize the game board with empty space
void init() {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            game[i][j] = ' ';
        }
    }
}

// Display the current state of the game board
void display() {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j)
            cout << game[i][j] << (j < 2 ? '|' : '\n');
    }
}

// Check if a player has won
bool check(char p) {
    for (int i = 0; i < 3; ++i)
        if (game[i][0] == p && game[i][1] == p && game[i][2] == p)
            return true;

    for (int i = 0; i < 3; ++i)
        if (game[0][i] == p && game[1][i] == p && game[2][i] == p)
            return true;

    return (game[0][0] == p && game[1][1] == p && game[2][2] == p) ||
           (game[0][2] == p && game[1][1] == p && game[2][0] == p);
}

// Check if the game is a draw
bool draw() {
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            if (game[i][j] == ' ')
                return false;

    return true;
}

int main() {
    char curr = 'X';
    bool win = false, drawGame = false;
    int r, c;
    init();
    while (!win && !drawGame) {
        display();
        cout << "Player " << curr << ", enter row (0-2) and column (0-2): ";
        cin >> r >> c;
        if (r < 0 || r > 2 || c < 0 || c > 2 || game[r][c] != ' ') {
            cout << "Invalid Move! Try again\n";
            continue;
        }
        game[r][c] = curr;
        win = check(curr);
        drawGame = draw();
        curr = (curr == 'X') ? 'O' : 'X';
    }
    display();
    if (win)
        cout << "Player " << curr << " wins!\n";
    else
        cout << "It's a draw!\n";
    return 0;
}
