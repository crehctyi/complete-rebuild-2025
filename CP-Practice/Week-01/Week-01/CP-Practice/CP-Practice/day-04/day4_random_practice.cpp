#include <iostream>
using namespace std;

int detect(int a) {
    return (a % 2 == 0);
}
int main() {
cout << detect(3) << endl;
cout << detect(8) << endl;
 }