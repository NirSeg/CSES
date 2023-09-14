#include <bits/stdc++.h>

using namespace std;
#define int int64_t

#define for_i(n, i) for (int i=0; i<n; i++)
using vi = vector<int>;

void fillArray(vi &arr, int len) {
    int a;
    for_i(len, i) {
        cin >> a;
        arr.push_back(a);
    }
}

int increasingArray(vi &arr, int len){
    int minMoves = 0;
    int maxValue = arr[0];
    for_i(len, i){
        if (arr[i] > maxValue)
            maxValue = arr[i];
        else{
            int dif = maxValue - arr[i];
            minMoves += dif;
        }
    }
    return minMoves;
}

signed main(){
    int len;
    cin >> len;
    vi arr;
    fillArray(arr, len);
    cout << increasingArray(arr, len);
}