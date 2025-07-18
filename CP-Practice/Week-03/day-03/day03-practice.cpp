#include <iostream>
#include <vector>
#include <cmath>

int main() {
    int n;
    std::cout << "Enter n: ";
    std::cin >> n;

    std::vector<bool> sieve(n + 1, true);
    sieve[0] = sieve[1] = false;

    for (int i = 2; i <= std::sqrt(n); ++i) {
        if (sieve[i]) {
            for (int j = i * i; j <= n; j += i) {
                sieve[j] = false;
            }
        }
    }

    std::cout << "Prime numbers up to " << n << ":\n";
    for (int i = 2; i <= n; ++i) {
        if (sieve[i]) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}
