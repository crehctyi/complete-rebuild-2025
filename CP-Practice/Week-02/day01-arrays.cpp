#include <iostream>
using namespace std;

int main() {
    int a[5] = {10, 20, 30, 40, 50};
    
    for (int i = 0; i < 5; i++) {
        cout << "a[" << i << "] = " << a[i] << endl;
    }

    a[2] = 99;

    cout << "update a[2]: " << a[2] << endl;

    return 0;
}