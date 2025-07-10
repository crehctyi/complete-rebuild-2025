#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> words;
    string input;
    int evenCount = 0;

    cout << "Enter 5 words:" << endl;

    for (int i = 0; i < 5; ++i) {
        cout << "Word " << i + 1 << ": ";
        cin >> input;
        words.push_back(input);
    }

    cout << "\nWords with even length:\n";

    for (string word : words) {
        if (word.length() % 2 == 0) {
            cout << word << endl;
            ++evenCount;
        }
    }

    cout << "\nTotal even-length words: " << evenCount << endl;

    return 0;
}
