#include <bits/stdc++.h>

using namespace std;
#define int int64_t

void grayCode(string &str, int n, int l) {
    if (l == n)
        printf("%s\n", str.c_str());
    else {
        grayCode(str, n, l + 1);
        str[l] = (str[l] == '1') ? '0' : '1';
        grayCode(str, n, l + 1);
    }
}

signed main() {
    int n;
    cin >> n;
    string str(n, '0');
    grayCode(str, n, 0);
}