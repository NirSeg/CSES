#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, a, b) for(ll i = a; i < b; i++)
ll dp[ll(1e6)];
ll maxTower = 1e6, mod = 1e9 + 7;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll t, tower;
    dp[0] = 2, dp[1] = 8;
    rep(i, 2, maxTower)
        dp[i] = ((6 * dp[i - 1] - 7 * dp[i - 2]) % mod + mod) % mod;
    cin >> t;
    while(t--){
        cin >> tower;
        cout << dp[tower - 1] << '\n';
    }
}