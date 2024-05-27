#include <bits/stdc++.h>

using namespace std;
#define int int64_t

void findSets(int n) {
    string fstSet, sndSet;
    int mid = ceil(n / 2.0);
    int downBnd = n / 4;
    int upBnd = downBnd + mid;
    for (int i = 1; i <= n; i++) {
        if (i > downBnd and i <= upBnd)
            fstSet.append(to_string(i) + " ");
        else
            sndSet.append(to_string(i) + " ");
    }
    cout << mid << endl << fstSet << endl;
    cout << n - mid << endl << sndSet << endl;
}

void twoSets(int n) {
    if (n * (n + 1) % 4 == 0) {
        cout << "YES" << endl;
        findSets(n);
    } else
        cout << "NO" << endl;
}

signed main() {
    int n;
    cin >> n;
    twoSets(n);
}