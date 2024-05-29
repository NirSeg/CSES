#include <bits/stdc++.h>

using namespace std;
#define int int64_t
using vi = vector<int>;

#define rep(i, a, b) for(int i = a; i < b; ++i)
#define all(x) begin(x), end(x)

int missingCoinSum(vi &coins, int n){
    int minSum = 1;
    sort(all(coins));
    rep(i, 0, n){
        if (minSum < coins[i])
            return minSum;
        minSum += coins[i];
    }
    return minSum;
}

signed main(){
    int n;
    cin >> n;
    vi coins(n);
    rep(i, 0, n){scanf("%lld", &coins[i]);}
    cout << missingCoinSum(coins, n);
}