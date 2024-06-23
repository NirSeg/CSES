#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
#define int int64_t

using namespace __gnu_pbds;
typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> indexed_set;

void josephusProblemII(int n, int k) {
    indexed_set set;
    int curr = k % n;
    for(int i = 1; i <= n; i++) { set.insert(i); }
    while (n--) {
        auto it = set.find_by_order(curr);
        printf("%lld ", *it);
        set.erase(it);
        if(n) curr = (curr + k) % n;
    }
}

signed main() {
    int n, k;
    cin >> n >> k;
    josephusProblemII(n, k);
}