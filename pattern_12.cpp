#include <iostream>

void pattern(int n);

int main() {
    int n;
    std::cin >> n;

    pattern(n);

    return 0;
}

void pattern(int n) {
    // Outer loop for total number of rows
    for (int i = 1; i <= n; i++) {
        // Loop for first number(s), print numbers in increasing order
        for (int j = 1; j <= i; j++) {
            std::cout << j << " ";
        }
        // Loop for space(s), condition: ((2 * n) - (2 * i)), or, (2 * (n - i)) after simplification
        for (int j = 1; j <= ((2 * n) - (2 * i)); ++j) {
            std::cout << "  ";
        }
        // Loop for the number(s) after the space(s), print numbers in decreasing order
        for (int j = i; j >= 1; j--) {
            std::cout << j << " ";
        }
        std::cout << std::endl;
    }
}
