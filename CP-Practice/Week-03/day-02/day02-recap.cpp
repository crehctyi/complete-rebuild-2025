#include <iostream> 
using namespace std;

int gcd(int a, int b) {
    if(b == 0) {
        return a; 
    } return (b, a % b);
}

int main() {
    int a; 
    int b;
    cout<<"Enter two numbers: "<< endl;
    cin >> a >> b;
    cout << "gcd is " << gcd(a,b) << endl;
    return 0;

}