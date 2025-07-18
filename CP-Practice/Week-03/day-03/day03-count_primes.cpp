#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n < 2)
        return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int a, b;
    int count = 0;

    cout << "Enter two numbers (a and b): ";
    cin >> a >> b;

    if (a > b) {
        swap(a, b);
    }

    for (int i = a; i <= b; i++) {
        if (isPrime(i)) {
            count++;
        }
    }

    cout << "Number of prime numbers between " << a << " and " << b << " is: " << count << endl;

    return 0;
}
