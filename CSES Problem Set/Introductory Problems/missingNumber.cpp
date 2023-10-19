#include <bits/stdc++.h>

using namespace std;
#define int int64_t

#define rep(i, a, b) for(int i = a; i < b; ++i)
using vb = vector<bool>;

void missingNumber(vb arr) {
    rep(i, 0, arr.size()){
        if(!arr[i])
            cout << i + 1;
    }
}

signed main() {
    int a, n;
    cin >> n;
    vb arr(n);
    rep(i, 0, n - 1) { cin >> a; arr[a - 1] = true; }
    missingNumber(arr);
}