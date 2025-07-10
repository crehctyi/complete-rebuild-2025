#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums;
    nums.push_back(3);
    nums.push_back(7);
    nums.push_back(1);
    nums.push_back(3);
    nums.push_back(9);
    nums.pop_back();

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    
    cout << "\nSize: " << nums.size() << endl;
    return 0;
}
