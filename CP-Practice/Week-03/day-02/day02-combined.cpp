#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if(b==0) return a; 
    return gcd(b, a % b);
}

int lcm(int a, int b) { 
return (a * b)/ gcd(a,b);
}

bool isPrime(int n) {
    if (n <= 0) return false; 
    for (int i = 2; i * i <= n; i++){
        if(n % i== 0) return false;
    }
    return true;

}
int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << a << (isPrime(a) ? " is" : " is not") << " prime." << endl;
    cout << b << (isPrime(b) ? " is" : " is not") << " prime." << endl;
    cout << "GCD: " << gcd(a, b) << endl;
    cout << "LCM: " << lcm(a, b) << endl;

    return 0;
}