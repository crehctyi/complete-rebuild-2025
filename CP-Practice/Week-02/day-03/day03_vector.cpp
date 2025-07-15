#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> nums;
    int x;

    cout << "Enter 5 numbers:\n";
    for (int i = 0; i < 5; i++) {
        cin >> x;
        nums.push_back(x); // adds to vector
    }

    sort(nums.begin(), nums.end());

    cout << "Sorted: ";
    for (int n : nums)
        cout << n << " ";
}
