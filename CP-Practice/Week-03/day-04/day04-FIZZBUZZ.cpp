#include <iostream>
using namespace std;

int main() {
int n;
cout << "Enter a number: ";
cin >> n;
cout << endl;
for(int i = 1;i <= n; i++){
    if( i % 3 == 0 && i % 5 == 0)
    cout << "FrizzBuzz" << endl;
    else if(i % 3 == 0)
     cout << "fizz" << endl;
    else if (i % 5 == 0)
    cout << "Buzz" << endl;
    else
        cout << i << endl; 
}
return 0;
}