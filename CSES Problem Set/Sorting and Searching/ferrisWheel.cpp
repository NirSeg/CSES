#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

#define rep(i, a, b) for(int i = a; i < b; ++i)
#define all(x) begin(x), end(x)

int ferrisWheel(vi &p, int x) {
    int begin = 0, end = p.size() - 1;
    int gondolas = 0;
    while (begin < end) {
        if (p[begin] + p[end] <= x) { begin++; }
        end--;
        gondolas++;
    }
    return begin == end ? gondolas + 1 : gondolas;
}

signed main() {
    int n, x;
    cin >> n >> x;
    vi p(n);
    rep(i, 0, n) { scanf("%d", &p[i]); }
    sort(all(p));
    cout << ferrisWheel(p, x);
}