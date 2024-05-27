#include <bits/stdc++.h>

using namespace std;
#define int int64_t

double log5(int x) {
    return log(x) / log(5.0);
}

int trailingZeros(int n) {
    int maxLogFive = (int) (log5(n));
    int trailingZeros = 0;
    for (int i = 1; i <= maxLogFive; i++) {
        trailingZeros += n / (int) pow(5, i);
    }
    return trailingZeros;
}

signed main() {
    int n;
    cin >> n;
    cout << trailingZeros(n);
}