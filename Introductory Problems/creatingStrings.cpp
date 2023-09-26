#include <bits/stdc++.h>

using namespace std;
#define int int64_t

#define all(x) x.begin(),x.end()

void creatingStrings(string s) {
    int count = 0;
    string str;
    sort(all(s));
    do {
        count++;
        str += s + '\n';
    } while (next_permutation(all(s)));
    cout << count << endl << str << endl;
}

signed main() {
    string s;
    cin >> s;
    creatingStrings(s);
}