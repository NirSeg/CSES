#include <bits/stdc++.h>

using namespace std;
#define int int64_t

#define rep(i, a, b) for(int i = a; i < b; ++i)

int digitQuery(int query, int lvl = 1, int plcVal = 1){
    int nxtPlcVal = 10 * plcVal;
    int numLvl = lvl * (nxtPlcVal - plcVal);
    if (query <= numLvl){
        string num = to_string(plcVal + (query - 1) / lvl);
        return num[(query - 1) % lvl] - '0';
    }
    return digitQuery(query - numLvl, lvl + 1, nxtPlcVal);
}

signed main() {
    int n;
    cin >> n;
    rep(i, 0, n) {
        int query;
        cin >> query;
        cout << digitQuery(query) << endl;
    }
}