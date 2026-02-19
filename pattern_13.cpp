#include <iostream>

void pattern(int n);

int main() {
    int n;
    std::cin >> n;

    pattern(n);

    return 0;
}

void pattern(int n) {
    int print_value = 1; // Starting value is 1
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            std::cout << print_value << " ";
            print_value++; // Increment the print value for the next print by 1
        }
        std::cout << std::endl;
    }
}
