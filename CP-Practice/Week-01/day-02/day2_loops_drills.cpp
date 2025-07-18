#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 100; i++) {
    if (i % 3 == 0 && i % 5 == 0)
    cout << "FizzBuzz" << endl;
    else if (i % 3 == 0)
    cout << "Fizz" << endl;
    else if (i % 5 == 0)
    cout << "Buzz" << endl;
    }
    int n;
    cout << "enter a number" << endl;
    cin >> n;
    
    int count = 0;

    int sum = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) 
        sum += 1;
    }
    cout << "sum of odd number from 1 to" << n << ": " << sum << endl;

    return 0;
}
