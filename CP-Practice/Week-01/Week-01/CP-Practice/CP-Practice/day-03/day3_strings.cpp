#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    cout << "ENter your name: ";
    getline(cin, name);

    cout << "length: " << name.length() << endl;

    cout << "First letter: " << name[0] << endl;

    name.push_back('!');
    cout << "After push: " << name << endl;

    string word = "hello";
    cout << "Subdtring of 'hello' from index 1: " << word.substr(1, 3) << endl;

    return 0;
}
