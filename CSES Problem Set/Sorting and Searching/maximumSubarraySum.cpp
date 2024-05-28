#include <bits/stdc++.h>

using namespace std;
#define int int64_t

#define rep(i, a, b) for(int i = a; i < b; ++i)

int maximumSubarraySum(int n){
    int a;
    cin >> a;
    int sum = a, maxSum = a;
    rep(i, 1, n){
        cin >> a;
        sum = sum > 0 ? sum + a : a;
        if (sum > maxSum)
            maxSum = sum;
    }
    return maxSum;
}

signed main(){
    int n;
    cin >> n;
    cout << maximumSubarraySum(n);
}