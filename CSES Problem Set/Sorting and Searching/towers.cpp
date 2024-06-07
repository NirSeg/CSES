#include <bits/stdc++.h>

using namespace std;
#define int int64_t
using vi = vector<int>;

#define rep(i, a, b) for(int i = a; i < b; ++i)

int towers(int n){
    multiset<int> topCubes;
    int cube;
    cin >> cube;
    topCubes.insert(cube);
    rep(i, 0, n - 1){
        scanf("%lld", &cube);
        auto it = topCubes.upper_bound(cube);
        if (it == topCubes.end())
            topCubes.insert(cube);
        else{
            topCubes.erase(it);
            topCubes.insert(cube);
        }
    }
    return topCubes.size();
}


signed main() {
    int n;
    cin >> n;
    cout << towers(n);
}