// Author: Shiv Gobind, Roll No. 241517

/*
   Program 2:
   Recursive computation of factorial for a given number.
*/

#include <iostream>
using namespace std;


int factorial(int n) {
    if (n == 0 || n == 1)   
        return 1;
    else
        return n * factorial(n - 1);  
} 

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n < 0) {
        cout << "Factorial of negative number doesn't exist.";
    } else {
        cout << "Factorial of " << n << " is " << factorial(n);
    }

    return 0;
}