#include <bits/stdc++.h>

using namespace std;
#define int int64_t

#define rep(i, a, b) for(int i = a; i < b; i++)
using vi = vector<int>;

int increasingArray(vi &arr){
    int minMoves = 0;
    int maxValue = arr[0];
    rep(i, 0, arr.size())
        arr[i] > maxValue ? maxValue = arr[i] : minMoves += maxValue - arr[i];
    return minMoves;
}

signed main(){
    int len;
    cin >> len;
    vi arr(len);
    rep(i, 0, arr.size()) { cin >> arr[i]; }
    cout << increasingArray(arr);
}