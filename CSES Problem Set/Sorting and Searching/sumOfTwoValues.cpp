#include <bits/stdc++.h>

using namespace std;
#define int int64_t
#define rep(i, a, b) for(int i = a; i < b; ++i)
using vi = vector<int>;

void sumOfTwoValues(int n, int x) {
    map<int, int> seen; int a;
    rep(i, 0, n) {
        scanf("%lld", &a);
        if (seen.count(x - a)) {
            cout << seen[x - a] + 1 << " " << i + 1;
            return;
        }
        seen[a] = i;
    }
    cout << "IMPOSSIBLE";
}

signed main() {
    int n, x;
    cin >> n >> x;
    sumOfTwoValues(n, x);
}