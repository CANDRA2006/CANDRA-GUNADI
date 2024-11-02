#include <iostream>
using namespace std;

char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
char current_marker;
int current_player;

void drawBoard() {
    cout << "Tic Tac Toe Game\n\n";
    cout << "Player 1 (X)  -  Player 2 (O)\n\n";
    cout << "     |     |     \n";
    cout << "  " << board[0][0] << "  |  " << board[0][1] << "  |  " << board[0][2] << "\n";
    cout << "_____|_____|_____\n";
    cout << "     |     |     \n";
    cout << "  " << board[1][0] << "  |  " << board[1][1] << "  |  " << board[1][2] << "\n";
    cout << "_____|_____|_____\n";
    cout << "     |     |     \n";
    cout << "  " << board[2][0] << "  |  " << board[2][1] << "  |  " << board[2][2] << "\n";
    cout << "     |     |     \n\n";
}

bool placeMarker(int slot) {
    int row = (slot - 1) / 3;
    int col = (slot - 1) % 3;
    
    if (board[row][col] != 'X' && board[row][col] != 'O') {
        board[row][col] = current_marker;
        return true;
    }
    return false;
}

int winner() {
    // Mengecek baris dan kolom
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) return current_player;
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) return current_player;
    }
    // Mengecek diagonal
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) return current_player;
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) return current_player;

    return 0;
}

void swapPlayerAndMarker() {
    if (current_marker == 'X') current_marker = 'O';
    else current_marker = 'X';

    current_player = (current_player == 1) ? 2 : 1;
}

void game() {
    current_marker = 'X';
    current_player = 1;
    int player_won;

    drawBoard();
    
    for (int i = 0; i < 9; i++) {
        cout << "Player " << current_player << " pilih slot: ";
        int slot;
        cin >> slot;

        if (slot < 1 || slot > 9 || !placeMarker(slot)) {
            cout << "Slot tidak valid, coba lagi.\n";
            i--; // Mengulangi langkah jika input tidak valid
            continue;
        }

        drawBoard();

        player_won = winner();
        if (player_won != 0) {
            cout << "Selamat! Player " << player_won << " menang!\n";
            return;
        }

        swapPlayerAndMarker();
    }
    
    cout << "Permainan seri!\n";
}

int main() {
    game();
    return 0;
}
