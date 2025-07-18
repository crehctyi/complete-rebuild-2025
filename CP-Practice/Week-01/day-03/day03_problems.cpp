#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
   int arr[5] = {5,3,9,1,2};

   cout << "Reverse arrays: ";
    for (int i = 4; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    
    cout << endl;
    return 0;
}
