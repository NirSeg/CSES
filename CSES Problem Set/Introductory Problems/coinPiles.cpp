#include <bits/stdc++.h>

using namespace std;
#define int int64_t

// Number of first moves := (2b - a) / 3
// Number of second moves := (2a - b) / 3

void coinPiles(int t) {
    int a, b;
    while(t--){
        scanf("%lld %lld", &a, &b);
        printf("%s\n", a > b * 2 || b > a * 2 || (a + b) % 3 != 0 ? "NO" : "YES");
    }
}

signed main() {
    int t;
    cin >> t;
    coinPiles(t);
}