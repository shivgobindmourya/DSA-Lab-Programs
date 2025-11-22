// Author: Shiv Gobind, Roll No. 241517

/*
   Program 1:
   Recursive generation of Fibonacci series up to N terms.
*/


#include <iostream>
using namespace std;

int fib(int n) {
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int N;
    cout << "Enter number of terms: ";
    cin >> N;

    cout << "Fibonacci Series: ";
    for (int i = 0; i < N; i++) {
        cout << fib(i) << " ";
    }

    return 0;
}
