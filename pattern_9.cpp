#include <iostream>

void pattern(int n);

int main() {
    int n;
    std::cin >> n;

    pattern(n);

    return 0;
}

/* 
 * Part 1->
 * Outer loop for the rows
 * Space <-> Star <-> Space
 * 3 inner loops for these, sequentially
 * Space = ((n - i) - 1); Star = (2 * i) + 1; i starts at 0, i = 0
 *
 * Part 2->
 * Outer loop for the rows
 * Space <-> Star <-> Space
 * 3 inner loops for these, sequentially
 * Space = i (till i, j < i in the condition); Star = ((2 * n) - ((2 * i) + 1)),
 * or, after simplifying, Star = ((2 * n) - (2 * i) - 1); i starts at 0, i = 0
 **/


void pattern(int n) {
    // Part 1
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < ((n - i) - 1); j++) {
            std::cout << " ";
        }

        for (int j = 0; j < ((2 * i) + 1); j++) {
            std::cout << "*";
        }
        for (int j = 0; j < ((n - i) - 1); j++) {
            std::cout << " ";
        }
        std::cout << std::endl;
    }

    // Part 2
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            std::cout << " ";
        }

        for (int j = 0; j < ((2 * n) - (2 * i) - 1); j++) {
            std::cout << "*";
        }
        for (int j = 0; j < i; j++) {
            std::cout << " ";
        }
        std::cout << std::endl;
    }
}