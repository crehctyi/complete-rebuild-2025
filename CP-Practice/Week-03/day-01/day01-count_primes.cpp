#include <iostream>
using namespace std;

bool prime(int n){
    if (n <= 1) 
    return false;
        for (int i = 2; i * i <= n; i++){
            if (n % i == 0) return false;
        }
        return true;
    }
int main(){
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;
    int count = 0; 
    for (int i= 1; i <= n; i++) {
        if (prime(i)) count++;
    }
    cout << count << " primes exist before " << n << endl;
} 
