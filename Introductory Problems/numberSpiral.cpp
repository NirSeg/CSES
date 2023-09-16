#include <bits/stdc++.h>

using namespace std;
#define int int64_t

#define for_i(n, i) for(int i=0; i<n; i++)

void numberSpiral(int numInputs) {
    for_i(numInputs, i) {
        int y, x;
        cin >> y >> x;
        int layer = (y > x) ? y : x;
        int idxInLayer = (y < x) ? y : x;
        int baseNumLayer = (layer - 1) * (layer - 1);
        if (layer % 2 == 0) {
            if (x == idxInLayer)
                cout << baseNumLayer + 2 * layer - idxInLayer << endl;
            else
                cout << baseNumLayer + idxInLayer << endl;
        } else {
            if (y == idxInLayer)
                cout << baseNumLayer + 2 * layer - idxInLayer << endl;
            else
                cout << baseNumLayer + idxInLayer << endl;
        }
    }
}

signed main() {
    int n;
    cin >> n;
    numberSpiral(n);
}