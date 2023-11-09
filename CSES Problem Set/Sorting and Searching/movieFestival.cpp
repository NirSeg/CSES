#include <bits/stdc++.h>

using namespace std;
#define int int64_t
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define all(x) begin(x), end(x)
#define all(x) begin(x), end(x)
using vii = vector<pair<int, int>>;

int movieFestival(vii &abs, int n) {
    int cnt = 0, minEnd = 0;
    rep(i, 0, n) {
        if (abs[i].first >= minEnd) {
            cnt++;
            minEnd = abs[i].second;
        } else { minEnd = min(abs[i].second, minEnd); }
    }
    return cnt;
}

signed main() {
    int n;
    cin >> n;
    vii abs(n);
    rep(i, 0, n) scanf("%lld %lld", &abs[i].first, &abs[i].second);
    std::sort(all(abs), [](const pair<int, int> &a, const pair<int, int> &b) { return a.first < b.first; });
    cout << movieFestival(abs, n);
}