#include <iostream>
using namespace std;

// Recursive function to calculate n^p
int power(int n, int p) {
    // Base case: any number raised to power 0 is 1
    if (p == 0) {
        return 1;
    }
    // Recursive case: multiply n by the result of power(n, p-1)
    return n * power(n, p - 1);
}

int main() {
    int n, p;
    cout << "Enter base (n): ";
    cin >> n;
    cout << "Enter power (p): ";
    cin >> p;

    cout << n << "^" << p << " = " << power(n, p) << endl;

    return 0;
}
