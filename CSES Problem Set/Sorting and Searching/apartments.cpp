#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

#define rep(i, a, b) for(int i = a; i < b; ++i)
#define all(x) begin(x), end(x)

int apartments(vi &apps, vi &apts, int diff) {
    int i = 0, j = 0;
    int n = apps.size(), m = apts.size();
    int matches = 0;
    while(i != n && j != m){
        if (apps[i] < apts[j] - diff)
            i++;
        else if (apps[i] > apts[j] + diff)
            j++;
        else{ matches++; i++; j++; }
    }
    return matches;
}

signed main() {
    int n, m, k;
    cin >> n >> m >> k;
    vi apps(n);
    vi apts(m);
    rep(i, 0, n){ scanf("%d", &apps[i]); }
    rep(i, 0, m){ scanf("%d", &apts[i]); }
    sort(all(apps));
    sort(all(apts));
    cout << apartments(apps, apts, k);
}