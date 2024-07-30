#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, a, b) for (ll i = a; i < b; i++)

ll editDistance(string str1, string str2){
    ll last, curr, n = ll(str1.size()), m = ll(str2.size());
    vector<ll> dp(m + 1);
    rep(j, 0, m + 1) dp[j] = j;
    rep(i, 1, n + 1){
        last = i;
        rep(j, 1, m + 1){
            curr = min(min(dp[j], last) + 1, dp[j - 1] + (str1[i - 1] != str2[j - 1]));
            dp[j - 1] = last;
            last = curr;
        }
        dp[m] = curr;
    }
    return dp[m];
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    string str1, str2;
    cin >> str1;
    cin >> str2;
    cout << editDistance(str1, str2);
}