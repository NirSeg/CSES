#include <bits/stdc++.h>

using namespace std;
#define int int64_t
using vi = vector<int>;

#define rep(i, a, b) for(int i = a; i < b; ++i)
#define all(x) begin(x), end(x)

int stickLengths(vi &sticks, int n){
    int median, cost = 0;
    sort(all(sticks));
    median = sticks[(n - 1) / 2];
    rep(i, 0, n){cost += abs(median - sticks[i]);}
    return cost;
}

signed main(){
    int n;
    cin >> n;
    vi sticks(n);
    rep(i, 0, n){scanf("%lld", &sticks[i]);}
    cout << stickLengths(sticks, n);
}