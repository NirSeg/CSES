#include <bits/stdc++.h>

using namespace std;
#define int int64_t

#define rep(i, a, b) for(int i = a; i < b; ++i)

void numberSpiral(int n) {
    rep(i, 0, n) {
        int y, x;
        scanf("%lld %lld", &y, &x);
        int layer = (y > x) ? y : x;
        int idxInLayer = (y < x) ? y : x;
        int baseNumLayer = (layer - 1) * (layer - 1);
        if (layer % 2 == 0)
            printf("%lld\n", x == idxInLayer ? baseNumLayer + 2 * layer - idxInLayer : baseNumLayer + idxInLayer);
        else
            printf("%lld\n", y == idxInLayer ? baseNumLayer + 2 * layer - idxInLayer : baseNumLayer + idxInLayer);
    }
}

signed main() {
    int n;
    cin >> n;
    numberSpiral(n);
}