#include <bits/stdc++.h>

using namespace std;
#define int int64_t



void josephusProblemI(int n) {
    int exp = 0, rem = 0, pow;
    while(n > 0) {
        for (int i = 2; i <= n; i+=2) {
            printf("%lld ", (i << exp) + rem);
        }
        pow = 1 << exp++;
        if (n & 1) printf("%lld ", pow + rem), rem += pow;
        else rem -= pow;
        n >>= 1;
    }
}


signed main() {
    int n;
    cin >> n;
    josephusProblemI(n);
}