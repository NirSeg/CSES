#include <bits/stdc++.h>

using namespace std;
#define int int64_t
using vi = vector<int>;

#define rep(i, a, b) for(int i = a; i < b; ++i)

int score(vi &pos, int n, int idx1, int idx2){
    int score = 0;
    if (idx1 > 0 && pos[idx1] < pos[idx1 - 1]) score++;
    if (idx1 < n - 1 && pos[idx1] > pos[idx1 + 1]) score++;
    if (idx2 - idx1 != 1 && idx2 > 0 && pos[idx2] < pos[idx2 - 1]) score++;
    if (idx2 < n - 1 && pos[idx2] > pos[idx2 + 1]) score++;
    return score;
}

void collectingNumbersII(vi &nums, int n, int p){
    vi pos(n);
    int rounds = 1;
    int a, b, k, l;
    rep(i, 0, n)
        pos[nums[i] - 1] = i;
    rep(i, 0, n - 1) {
        if (pos[i] > pos[i + 1])
            rounds++;
    }
    rep(i, 0, p){
        scanf("%lld %lld", &a, &b);
        k = nums[--a] - 1, l = nums[--b] - 1;
        if (k > l) swap(k, l);
        rounds -= score(pos, n, k, l);
        swap(nums[a], nums[b]); swap(pos[k], pos[l]);
        rounds += score(pos, n, k, l);
        printf("%lld\n", rounds);
    }
}


signed main(){
    int n, p;
    cin >> n >> p;
    vi nums(n);
    rep(i, 0, n){scanf("%lld", &nums[i]);}
    collectingNumbersII(nums, n, p);
}
