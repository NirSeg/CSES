#include <bits/stdc++.h>

using namespace std;
#define int int64_t

#define for_i(n, i) for (int i=0; i<n; i++)


// Number of first moves := (2b - a) / 3
// Number of second moves := (2a - b) / 3
bool isNumMoveValid(int numMove) {
    return (numMove % 3 == 0) && (numMove >= 0);
}

bool isCoinPile(int a, int b) {
    int numFirstMove = 2 * b - a;
    int nunSecondMove = 2 * a - b;
    return isNumMoveValid(numFirstMove) && isNumMoveValid(nunSecondMove);
}

void coinPiles(int t) {
    int a, b;
    for_i(t, i) {
        cin >> a >> b;
        cout << (isCoinPile(a, b) ? "YES" : "NO") << endl;
    }
}

signed main() {
    int t;
    cin >> t;
    coinPiles(t);
}