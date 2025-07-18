#include <iostream>
using namespace std;
int main() {
    int a; 
    int b; 
    int k; 
    cout << "Enter 3 numbers: " << endl;
    cin >> a >> b >> k;
    int count = 0;
    for(int i = a; i <= b; i++)  
        if (i  % k == 0)
            count++;

   cout << "There are " << count << " numbers divisible between " << a << " and " << b << " That are devisible by " << k << endl;   

}