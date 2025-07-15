#include <iostream>
using namespace std;

bool isPrime(int n) {
    if(n <= 1)
    return false; 
    for(int i = 2; i * i <= n; i++) {
        if (n % i == 0)
        return false;
    }
    return true; 

}
int main() { 
    int n;
    cout << "Enter a number: " << endl;
    cin >> n; 
    cout << n << isPrime << endl;
    bool result = isPrime(n);
    if (result) {
        cout << n << "is prime" <<endl;
    } else {
        cout << n << "is not prime" << endl;
    }

    return 0;
}