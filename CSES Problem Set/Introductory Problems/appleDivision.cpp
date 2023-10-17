#include <bits/stdc++.h>

using namespace std;
#define int int64_t

using vi = vector<int>;

vi arr;
int n, total = 0;

void fillArray() {
    cin >> n;
    arr.resize(n);
    for (int i = 0; i < n; i++) { cin >> arr[i]; total += arr[i];}
}

int appleDivision(int sum, int idx) {
    int diff = total - 2 * sum;
    if (diff <= 0 or idx == n)
        return abs(diff);
    return min(appleDivision(sum + arr[idx], idx + 1), appleDivision(sum, idx + 1));
}

signed main() {
    fillArray();
    cout << appleDivision(arr[0], 1);
}