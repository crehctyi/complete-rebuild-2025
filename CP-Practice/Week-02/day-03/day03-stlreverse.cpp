#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main () {
    string word;
    cin >> word;

    reverse(word.begin(), word.end());
    cout << "Reversed: " << word << endl;

    sort(word.begin(), word.end());
    cout << "reversed: " << word << endl;

    return 0;
}