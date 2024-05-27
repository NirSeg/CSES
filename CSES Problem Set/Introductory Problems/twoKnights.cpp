#include <bits/stdc++.h>

using namespace std;
#define int int64_t

#define for_i(n, i) for(int i=0; i<n; i++)

int numBadPositions(int n) {
    return 4 * (n - 2) * (n - 1);
}

int numPositions(int n) {
    return n * n * (n * n - 1) / 2;
}

int numGoodPositions(int n) {
    if (n == 1)
        return 0;
    if (n == 2)
        return 6;
    if (n == 3)
        return 28;
    else
        return numPositions(n) - numBadPositions(n);
}

void twoKnights(int n) {
    for_i(n, i) {
        cout << numGoodPositions(i + 1) << endl;
    }
}

signed main() {
    int n;
    cin >> n;
    twoKnights(n);
}