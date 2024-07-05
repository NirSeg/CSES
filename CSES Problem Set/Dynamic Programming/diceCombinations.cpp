#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, a, b) for(int i = a; i < b; ++i)

ll diceCombinations(ll n){
    ll mod = 1e9 + 7;
    vector<ll> dp(n + 1, 0);
    dp[0] = 1;
    rep(i, 1, n + 1){
        for (int j = 1; j < 7 && j <= i; j++)
            (dp[i] += dp[i - j]) %= mod;
    }
    return dp[n];
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin >> n;
    cout << diceCombinations(n);
}