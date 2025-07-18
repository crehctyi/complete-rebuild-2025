#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if(b==0) return a; 
    return gcd(b, a % b);
}

int lcm(int a, int b) { 
return (a * b)/ gcd(a,b);
}
 
int main(){
    int a;
    int b;
    cout << "enter 2 numbers: " << endl;
    cin >> a >> b; 
    cout << "gcd is: " << gcd(a, b) << "The least common factor is: " << lcm(a, b) << endl;
}