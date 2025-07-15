#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int>nums;
    int x;

    cout << "Enter 6 numbers" << endl;
    for(int i=0; i<7;i++) {
        cin >> x;
        nums.push_back(x);
    }
    int min = nums[0];
    for(int i=0; i<7; i++){
        if (nums[i] < min) {
            min = nums[i];
        }
    }
    cout << "Min: " << min <<endl;
    int max = nums[0];
    for(int i=0; i<7; i++){
        if (nums[i] > max) {
            max = nums[i];
        }
    }
    cout<< "Max: "<< max << endl;
    
    int sum = 0;
    for(int i=0; i<7; i++) {
        sum += nums[i]; 
    }
    cout << "The average is: " << (sum / nums.size()) << endl;

    sort(nums.begin(), nums.end());
    double median;
    if (nums.size() % 2 == 0) {
        median = (nums[nums.size()/2 - 1] + nums[nums.size()/2]) / 2.0;
    } else {
        median = nums[nums.size()/2];
    }
                    cout << "The Median: " << median << endl;
                    return 0;
    }
