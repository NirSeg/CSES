#include <bits/stdc++.h>

using namespace std;
#define int int64_t

void weirdAlgorithm(int n) {
    while (n > 1) {
        cout << n << " ";
        n = n % 2 == 0 ? n / 2 : 3 * n + 1;
    }
    cout << n;
}

signed main() {
    int num;
    cin >> num;
    weirdAlgorithm(num);
}