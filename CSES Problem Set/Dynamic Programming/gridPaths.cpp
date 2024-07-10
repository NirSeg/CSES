#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define rep(i, a, b) for (ll i = a; i < b; i++)

ll removingDigits(ll n) {
    vector<vector<ll>> dp(n, vector<ll>(n, 0));
    char ch; ll mod = 1e9 + 7;
    cin >> ch;
    if(ch == '.') dp[0][0] = 1;
    for(ll i = 1; i < n; i++){
        cin >> ch;
        if (ch == '.' && dp[0][i - 1]) dp[0][i]++;
    }
    rep(i, 1, n){
        cin >> ch;
        if (ch == '.' && dp[i - 1][0]) dp[i][0]++;
        rep(j, 1, n){
            cin >> ch;
            if(ch == '.')
                dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % mod;
        }
    }
    return dp[n - 1][n - 1];
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin >> n;
    cout << removingDigits(n);
}