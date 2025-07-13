#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int>nums;
    int x;

    cout << "Enter 6 numbers" << endl;
    for(int i=0; i<=5;i++) {
        cin >> x;
        nums.push_back(x);
    }
    int min = nums[0];
    for(int i=0; i<=5; i++){
        if (nums[i] < min) {
            min = nums[i];
        }
    }
    cout << "Min: " << min <<endl;
    int max = nums[0];
    for(int i=0; i<=5; i++){
        if (nums[i] > max) {
            max = nums[i];
        }
    }
    cout<< "Max: "<< max << endl;
    
    int sum = 0;
    for(int i=0; i<=5; i++) {
        sum += nums[i]; 
    }
    cout << "The average is: " << (sum / nums.size()) << endl;
    return 0; 
} 