#include <iostream>
#include <string>
using namespace std;

int main(){
    string word;
    cout <<"Enter a word: "<<endl;
    getline(cin, word);

    string rev = "";
    for (int i = word.length() -1; i >= 0; i--) {
        rev += word[i];
    }
        if (rev == word){
            cout << "This is a palinfrome!" << endl;
        } else {
            cout << "Not a palindrome." << endl;
        }
    cout << "Original word is: " << word << endl;
    cout << "Reversed is: " << rev << endl;

    return 0;
} 