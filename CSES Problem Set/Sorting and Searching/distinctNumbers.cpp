#include <bits/stdc++.h>

using namespace std;
#define rep(i, a, b) for(int i = a; i < b; ++i)

map<int, bool> dNums;

int distinctNumbers(int n){
    int a;
    rep(i, 0, n){
        cin >> a;
        dNums[a] = true;
    }
    return dNums.size();
}

signed main(){
    int n;
    cin >> n;
    cout << distinctNumbers(n);
}