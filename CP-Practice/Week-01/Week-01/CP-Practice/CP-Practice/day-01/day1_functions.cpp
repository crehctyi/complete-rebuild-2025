#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

void swapVals(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 3, y = 5;
    cout << "Sum: " << add(x, y) << endl;

    swapVals(x, y);
    cout << "Swapped: x = " << x << ", y = " << y << endl;
    return 0;
}
