#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= 10; i++) {
        int power = pow(n, i);
        int lastDigit = power % 10;
        cout << lastDigit << endl;
    }

    return 0;
}
