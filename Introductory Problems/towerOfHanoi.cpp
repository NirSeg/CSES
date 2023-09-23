#include <bits/stdc++.h>

using namespace std;
#define int int64_t

int numMoveHanoi(int n) { return (1 << n) - 1; }

void hanoi(int disks, int src = 1, int dst = 3, int other = 2) {
    if (disks == 0) return;
    hanoi(disks - 1, src, other, dst);
    cout << src << " " << dst << endl;
    hanoi(disks - 1, other, dst, src);
}

signed main() {
    int n;
    cin >> n;
    cout << numMoveHanoi(n) << endl;
    hanoi(n);
}