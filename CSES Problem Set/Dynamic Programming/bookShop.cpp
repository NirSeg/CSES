#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, a, b) for (ll i = a; i < b; i++)

ll bookShop(ll n, ll x) {
    vector<vector<ll>> books(n, vector<ll>(2));
    vector<ll> dp(x + 1, 0);
    rep(i, 0, n) cin >> books[i][0];
    rep(i, 0, n) cin >> books[i][1];
    for (ll i = 0; i < n; i++) {
        for(ll j = x; j >= books[i][0]; j--)
            dp[j] = max(dp[j], dp[j - books[i][0]] + books[i][1]);
    }
    return dp[x];
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, x;
    cin >> n >> x;
    cout << bookShop(n, x);
}