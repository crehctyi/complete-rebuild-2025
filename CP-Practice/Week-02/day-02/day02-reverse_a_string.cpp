#include <iostream>
#include <string>
using namespace std;

int main() {
    string name; 
    cout << "Enter a word" << endl;
    cin >> name;
    for(int i = name.length() - 1; i >= 0; i--) {
    cout << name[i]; 
    }
    cout << endl;
    return 0;
}
    
