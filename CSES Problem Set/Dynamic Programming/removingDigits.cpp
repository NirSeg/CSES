#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, a, b) for (ll i = a; i < b; i++)

ll removingDigits(ll n) {
    vector<ll> dp(n + 1, 1e6);
    dp[0] = 0;
    string num;
    rep(i, 1, n + 1){
        num = to_string(i);
        for(char ch : num)
            dp[i] = min(dp[i], dp[i - (ch - '0')] + 1);
    }
    return dp[n];
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin >> n;
    cout << removingDigits(n);
}