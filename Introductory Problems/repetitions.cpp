#include <bits/stdc++.h>

using namespace std;
#define int int64_t

#define for_i(n, i) for (int i=0; i<n; i++)

void update_max_repetition(int& max_repetition, int repetition) {
    if (repetition > max_repetition) {
        max_repetition = repetition;
    }
}

int repetitions(string &sequence) {
    int max_repetition = 1, repetition = 1;
    for_i(sequence.length() - 1, i) {
        if (sequence[i] == sequence[i + 1])
            repetition++;
        else {
            update_max_repetition(max_repetition, repetition);
            repetition = 1;
        }
    }
    update_max_repetition(max_repetition, repetition);
    return max_repetition;
}

signed main() {
    string str;
    getline(cin, str);
    cout << repetitions(str);
};