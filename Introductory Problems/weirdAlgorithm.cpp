#include <bits/stdc++.h>

using namespace std;
#define int int64_t

// get a positive integer
void weirdAlgorithm(int num) {
    cout << num << " ";
    if (num == 1)
        return;
    else if (num % 2 == 0)
        weirdAlgorithm(num / 2);
    else
        weirdAlgorithm(3 * num + 1);
}

signed main() {
    int num;
    cin >> num;
    weirdAlgorithm(num);
}