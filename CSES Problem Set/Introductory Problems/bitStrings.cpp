#include <bits/stdc++.h>

using namespace std;
#define int int64_t

int modulo = 1e9 + 7;

int bitStrings(int n){
    if (n == 1)
        return 2;
    int s = bitStrings(n / 2);
    return (s * s << (n % 2)) % modulo;
}

signed main(){
    int n;
    cin >> n;
    cout << bitStrings(n);
}