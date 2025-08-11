#include <bits/stdc++.h>
using namespace std;

int main() {
    long long limit;
    cout << "Enter the maximum number for Fibonacci sequence: ";
    cin >> limit;

    long long a = 0, b = 1;

    cout << "Fibonacci Sequence up to " << limit << ":\n";

    while (a <= limit) {
        cout << a << " ";
        long long next = a + b;
        a = b;
        b = next;
    }

    cout << "\n";
    return 0;
}
