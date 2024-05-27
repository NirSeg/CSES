#include <bits/stdc++.h>

using namespace std;
#define int int64_t

void printDoubleStep(int num){
    for (int i = num; i > 0; i -= 2)
        cout << i << ' ';
}

void permutations(int num){
    if (num == 1)
        cout << num;
    else if (num <= 3)
        cout << "NO SOLUTION";
    else{
        if (num % 2 == 0){
            printDoubleStep(num - 1);
            printDoubleStep(num);
        }
        else{
            printDoubleStep(num);
            printDoubleStep(num - 1);
        }
    }
}

signed main(){
    int n;
    cin >> n;
    permutations(n);
}