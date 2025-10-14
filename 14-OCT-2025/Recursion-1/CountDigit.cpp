#include <bits/stdc++.h>
using namespace std;
int countDigits(int n) {
    int num = n;
    int count = 0;

    while (num > 0) {
        int digit = num % 10;
        if (digit != 0 && n % digit == 0)
            count++;
        num /= 10;
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    cout << countDigits(n) << endl;
    return 0;
}
