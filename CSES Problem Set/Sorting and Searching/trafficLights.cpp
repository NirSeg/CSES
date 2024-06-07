#include <bits/stdc++.h>

using namespace std;
#define int int64_t
using vi = vector<int>;

#define rep(i, a, b) for(int i = a; i < b; ++i)

void trafficLights(int x, int n) {
    vi lights(n), gaps(n);
    set<int> lights_pos{0, x};
    int max_gap = 1, prev = 0;
    for (int &l: lights) { scanf("%lld", &l); }
    for (int l: lights) { lights_pos.insert(l); }
    for (int pos: lights_pos) {
        max_gap = max(max_gap, pos - prev);
        prev = pos;
    }
    gaps[n - 1] = max_gap;
    for (int i = n - 1; i > 0; i--) {
        lights_pos.erase(lights[i]);
        auto up_it = lights_pos.upper_bound(lights[i]);
        max_gap = max(max_gap, *up_it - *(--up_it));
        gaps[i - 1] = max_gap;
    }
    for (int gaps: gaps) { printf("%lld ", gaps); }
}


signed main() {
    int x, n;
    cin >> x >> n;
    trafficLights(x, n);
}