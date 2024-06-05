#include <bits/stdc++.h>

using namespace std;
#define int int64_t
using vi = vector<int>;

#define rep(i, a, b) for(int i = a; i < b; ++i)

int playlist(vi songs, int n) {
    map<int, int> uSongs;
    int pMax = 0, s = 0;
    rep(e, 0, n) {
        if (uSongs.find(songs[e]) != uSongs.end())
            s = max(s, uSongs[songs[e]] + 1);
        uSongs[songs[e]] = e;
        pMax = max(pMax, e - s + 1);
    }
    return pMax;
}


signed main() {
    int n, song;
    cin >> n;
    vi songs(n);
    rep(i, 0, n) { scanf("%lld", &songs[i]); }
    cout << playlist(songs, n);
}