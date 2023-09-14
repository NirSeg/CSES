#include <bits/stdc++.h>

using namespace std;
#define int int64_t

#define for_i(n, i) for (int i=0; i<n; i++)
#define all(x) x.begin(),x.end()
using vi = vector<int>;

void fillArray(vi &arr, int len) {
    int a;
    for_i(len, i) {
        cin >> a;
        arr.push_back(a);
    }
}

// supposed sum: num * (num + 1) / 2
// sum is the sum of the array
// if num is even occurs: sum % (num + 1) = num + 1 - missing_num
// and if num is odd then: sum % num = num - missing_num

void missingNumber(vi arr, int num) {
    int sum = 0;
    int temp;

    if (num % 2 == 0)
        temp = num + 1;
    else
        temp = num;

    for_i(num - 1, i)
        sum = (sum + arr[i]) % temp;
    int missingNum = temp - sum;
    cout << missingNum;
}

signed main() {
    int num;
    cin >> num;
    int len = num - 1;
    vi arr;
    fillArray(arr, len);
    missingNumber(arr, num);
}