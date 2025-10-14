#include <bits/stdc++.h>
using namespace std;
int main() {
    string str = "my name is kartik gupta";
    if (str.length() == 0) {
        cout << "The number of words are 0";
        return 0;
    }
    int count = 0;
    bool inWord = false;
    for (char c : str) {
        if (isspace(c)) {
            inWord = false;
        } else if (!inWord) {
            count++;
            inWord = true;
        }
    }
    cout << "The number of words are " << count;
}
