#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define rep(i, a, b) for (ll i = a; i < b; i++)

ll coinCombinationsII(ll x, ll n) {
    vector<ll> dp(x + 1, 0);
    ll coin, mod = 1e9 + 7;
    dp[0] = 1;
    rep(i, 0, n) {
        cin >> coin;
        rep(j, 0, x + 1)
            if(coin <= j) (dp[j] += dp[j - coin]) %= mod;
    }
    return dp[x];
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, x;
    cin >> n >> x;
    cout << coinCombinationsII(x, n);
}