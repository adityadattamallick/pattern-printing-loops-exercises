#include <iostream>

void pattern(int n);

int main() {
    int n;
    std::cin >> n;

    pattern(n);

    return 0;
}

void pattern(int n) {
    for (int i = 0; i < n; i++) { // Outer loop for the rows
        // Space <-> Star <-> Space
        // 3 inner loops for these, sequentially
        // Space = i (till i, j < i in the condition); Star = ((2 * n) - ((2 * i) + 1)), or, after simplifying, Star = ((2 * n) - (2 * i) - 1); i starts at 0, i = 0
        for (int j = 0; j < i; j++) {
            std::cout << " ";
        }
        for (int j = 0; j < ((2 * n) - (2 * i) - 1); j++) {
            std::cout << "*";
        }
        for (int j = 0; j < i; j++) {
            std::cout << " ";
        }
        std::cout << "\n";
    }
}
