#include <bits/stdc++.h>

using namespace std;
#define int int64_t

// get a positive integer
void weird_algorithm(int num) {
    cout << num << " ";
    if (num == 1)
        return;
    else if (num % 2 == 0)
        weird_algorithm(num / 2);
    else
        weird_algorithm(3 * num + 1);
}

signed main() {
    int num;
    cin >> num;
    weird_algorithm(num);
}