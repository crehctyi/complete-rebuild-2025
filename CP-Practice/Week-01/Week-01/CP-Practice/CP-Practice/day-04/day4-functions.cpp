#include <iostream>
using namespace std;

int square(int x) {
    return x * x;
}
void swapVals(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;

} 
bool isEven(int n) {
    return n % 2 == 0;
}
int main() {
    int x = 5;
    cout<< "Square of" << x << "is" << square(x) << endl;

    int a = 3, b = 7;
    swapVals(a, b);
    cout << "After swap: a = " << a << " ' b = " << b << endl;
    cout << "enter a number: ";
    int n;
    cin >> n;
    cout << (isEven(n) ? "Even" : "Odd") << endl;
return 0;
}