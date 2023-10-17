#include <bits/stdc++.h>

using namespace std;
#define int int64_t
using vi = vector<int>;
#define rep(i, a, b) for(int i = a; i < b; ++i)

#define N 8
char savedSpots[N][N];
int total = 0;

void fillBoard() {
    rep(i, 0, N) {
        rep(j, 0, N) {
            cin >> savedSpots[i][j];
        }
    }
}

bool checkBoard(vi &queens, int idx) {
    if (savedSpots[idx][queens[idx]] == '*') { return false; }
    rep(i, 0, idx) {
        if (queens[i] == queens[idx] or abs(queens[idx] - queens[i]) == abs(idx - i))
            return false;
    }
    return true;
}

void solveQueens(vi queens, int idx = 0) {
    if (idx == N) { total++; return; }
    rep(i, 0, N) {
        queens[idx] = i;
        if (checkBoard(queens, idx)) { solveQueens(queens, idx + 1); }
    }
}

signed main() {
    fillBoard();
    vi queens(N);
    solveQueens(queens);
    cout << total;
}