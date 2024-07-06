#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define rep(i, a, b) for(int i = a; i < b; i++)

ll coinCombinationsI(ll x, const vector<ll> &coins, ll n) {
    vector<ll> dp(x + 1, 0);
    ll mod = 1e9 + 7;
    dp[0] = 1;
    rep(i, 1, x + 1) {
        for (ll j = 0; j < n && coins[j] <= i; j++)
            (dp[i] += dp[i - coins[j]]) %= mod;
    }
    return dp[x];
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, x;
    cin >> n >> x;
    vector<ll> coins(n);
    rep(i, 0, n) cin >> coins[i];
    sort(coins.begin(), coins.end());
    cout << coinCombinationsI(x, coins, n);
}