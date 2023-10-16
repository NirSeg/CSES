#include <bits/stdc++.h>

using namespace std;
#define int int64_t
#define N 7

bool board[N][N];
string turns;
int total = 0;

void gridPaths(int step, int x, int y) {
    bool isEndSpot = x == N - 1 && y == 0;
    if (step == N * N) {
        if (isEndSpot)
            total++;
        return;
    } else if (isEndSpot)
        return;
    bool isTurn = turns[step - 1] != '?';
    bool up = x != 0 && !board[x - 1][y];
    bool down = x != N - 1 && !board[x + 1][y];
    bool left = y != 0 && !board[x][y - 1];
    bool right = y != N - 1 && !board[x][y + 1];
    if (!(right ^ left) && !(up ^ down))
        return;
    if ((!isTurn || turns[step - 1] == 'U') && up) {
        board[x - 1][y] = true;
        gridPaths(step + 1, x - 1, y);
        board[x - 1][y] = false;
    }
    if ((!isTurn || turns[step - 1] == 'D') && down) {
        board[x + 1][y] = true;
        gridPaths(step + 1, x + 1, y);
        board[x + 1][y] = false;
    }
    if ((!isTurn || turns[step - 1] == 'L') && left) {
        board[x][y - 1] = true;
        gridPaths(step + 1, x, y - 1);
        board[x][y - 1] = false;
    }
    if ((!isTurn || turns[step - 1] == 'R') && right) {
        board[x][y + 1] = true;
        gridPaths(step + 1, x, y + 1);
        board[x][y + 1] = false;
    }
}

signed main() {
    cin >> turns;
    board[0][0] = true;
    gridPaths(1, 0, 0);
    board[0][0] = false;
    cout << total;
}