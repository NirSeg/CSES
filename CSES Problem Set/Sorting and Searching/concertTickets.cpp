#include <bits/stdc++.h>

using namespace std;
#define int int64_t
#define all(x) begin(x), end(x)
using vi = vector<int>;

void concertTickets(vi &hs, int m){
    int t, i, res;
    vi links(hs.size() + 1); iota(all(links), 0);
    sort(all(hs));
    while(m--){
        scanf("%lld", &t);
        i = upper_bound(all(hs), t) - hs.begin();
        while (i != links[i]) i = links[i] = links[links[i]];
        if(i==0) res = -1;
        else { res = hs[i - 1]; links[i]--; }
        printf("%lld\n", res);
    }
}

signed main(){
    int n, m;
    cin >> n >> m;
    vi hs(n);
    for (auto &h : hs) scanf("%lld", &h);
    concertTickets(hs, m);
}