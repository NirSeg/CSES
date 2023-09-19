#include <bits/stdc++.h>

using namespace std;
#define int int64_t

int modulo = 1e9 + 7;

int bitStrings(int n){
    if (n == 1)
        return 2;
    return 2 * bitStrings(n - 1) % modulo;
}

signed main(){
    int n;
    cin >> n;
    cout << bitStrings(n);
}