#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cout << "Enter a word" << endl;
    cin >> word; 
    for (int i = 0; i < word.length(); i++){
        cout << word[i] << " ";

    }
    int count = 0;
    for (int i = 0; i < word.length(); i++){
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u') 
            count++;
    cout << "the word contains " << count << "vowels" << endl;       

    }
    return 0;
}