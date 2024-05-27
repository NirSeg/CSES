#include <bits/stdc++.h>

using namespace std;
#define int int64_t

using vi = vector<int>;
#define for_i(n, i) for (int i=0; i<n; i++)

#define NUM_LETTERS 26

bool possiblePalindrome(vi &numLettersString, int &oddLetterIdx) {
    for_i(NUM_LETTERS, i) {
        if (numLettersString[i] % 2 == 1) {
            if (oddLetterIdx == -1)
                oddLetterIdx = i;
            else
                return false;
        }
    }
    return true;
}

void printLetters(int idx, int numLetter) {
    for_i(numLetter, i) {
        cout << (char) (idx + 'A');
    }
}

void printPalindrome(const vi &numLettersString, const int &oddLetterIdx, int idx = 0) {
    int halfCurrNumLetter = numLettersString[idx] / 2;
    printLetters(idx, halfCurrNumLetter);
    if (idx == NUM_LETTERS - 1) {
        if (oddLetterIdx != -1)
            cout << (char) (oddLetterIdx + 'A');
    } else
        printPalindrome(numLettersString, oddLetterIdx, idx + 1);
    printLetters(idx, halfCurrNumLetter);
}

void palindromeReorder(string &palindrome) {
    vi numLettersString(NUM_LETTERS);
    int oddLetterIdx = -1;
    for (char letter: palindrome) {
        numLettersString[letter - 'A']++;
    }
    if (possiblePalindrome(numLettersString, oddLetterIdx)) {
        printPalindrome(numLettersString, oddLetterIdx);
    } else
        cout << "NO SOLUTION";
}

signed main() {
    string str;
    getline(cin, str);
    palindromeReorder(str);
}