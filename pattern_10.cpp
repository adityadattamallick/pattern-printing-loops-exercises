#include <iostream>

void pattern(int n);

int main() {
    int n;
    std::cin >> n;

    pattern(n);

    return 0;
}

void pattern(int n) {
    for (int i = 1; i <= ((2 * n) - 1); i++) {
        if (i <= n) {
            // Printing the first half till the symmetry point, n
            for (int j = 1; j <= i; j++) {
                std::cout << "*";
            }
        } else {
            // Printing the second half after the symmetry point, n, till ((2 * n) - 1)
            for (int j = 1; j <= ((2 * n) - i); j++) {
                std::cout << "*";
            }
        }
        std::cout << std::endl;
    }
}
