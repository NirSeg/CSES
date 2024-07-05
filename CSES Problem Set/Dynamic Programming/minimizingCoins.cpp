#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, a, b) for (ll i = a; i < b; ++i)

ll minimizingCoins(ll x, const vector<ll> &coins, ll n){
    vector<ll> dp(x + 1, -1);
    dp[0] = 0;
    rep(i, 1, x + 1){
        ll j = 0;
        for(; j < n && coins[j] <= i && dp[i] == -1; j++)
            if(dp[i - coins[j]] != -1)
                dp[i] = dp[i - coins[j]] + 1;
        for(; j < n && coins[j] <= i; j++)
            if(dp[i - coins[j]] != -1)
                dp[i] = min(dp[i], dp[i - coins[j]] + 1);
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
    cout << minimizingCoins(x, coins, n);
}