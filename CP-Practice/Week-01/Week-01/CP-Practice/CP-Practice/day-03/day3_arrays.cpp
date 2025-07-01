#include <iostream> 
using namespace std;

int main() {
    int arr[5] = {4,2,7,1,9};

    cout << "Array elements";
    for(int i = 0; i < 5; i++)
    cout << arr[i] << " ";
    cout << endl;

    int maxVal = arr[0];
    for (int i = 1; i < 5; i++){
        if (arr[i] > maxVal)
        maxVal = arr[i];
    }
    cout << "Max value: " << maxVal << endl;

    return 0;

    }

