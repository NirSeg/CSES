#include <bits/stdc++.h>

using namespace std;
#define int int64_t
using vi = vector<int>;

#define rep(i, a, b) for(int i = a; i < b; ++i)

int collectingNumbers(vi &nums, int n){
    vi pos(n);
    int rounds = 1;
    rep(i, 0, n)
        pos[nums[i] - 1] = i;
    rep(i, 0, n - 1) {
        if (pos[i] > pos[i + 1])
            rounds++;
    }
    return rounds;
}

signed main(){
    int n;
    cin >> n;
    vi nums(n);
    rep(i, 0, n){scanf("%lld", &nums[i]);}
    cout << collectingNumbers(nums, n);
}