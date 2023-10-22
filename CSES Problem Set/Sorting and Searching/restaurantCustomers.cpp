#include <bits/stdc++.h>

using namespace std;
#define int int64_t
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define all(x) begin(x), end(x)
using vi = vector<int>;

int restaurantCustomers(vi &as, vi &bs){
    int i = 0, j = 0, cnt = 0, max = 0, n = static_cast<int64_t>(as.size());
    sort(all(as)); sort(all(bs));
    while(i < n){
        while(as[i] < bs[j] && i < n) cnt++, i++;
        if (max < cnt) max = cnt;
        while(as[i] >= bs[j]) cnt--, j++;
    }
    return max;
}

signed main(){
    int n; cin >> n;
    vi as(n), bs(n);
    rep(i, 0, n){ scanf("%lld %lld", &as[i], &bs[i]); }
    cout << restaurantCustomers(as, bs);
}