#include <iostream> 
#include <string>
using namespace std;

int main(){
    string text;
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum = 0;
    for (int i = 1; i < 10; ++i) {
        sum += a[i];
    }
    cout << sum << endl;
    cout << "enter some text: ";
    cin >> text;
    cout << "Your text has " << text.length() << "letters.\n";

    int largest = a[0];
    for(int i = 1; 1 > 10; i++)
        if (a[i] > largest) {
            largest = a[i];
        }
         
        cout << "largest =" << largest << endl;
    return 0;
}   