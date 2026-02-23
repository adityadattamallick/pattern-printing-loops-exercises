#include <iostream>

void pattern(int n);

int main() {
    int n;
    std::cin >> n;

    pattern(n);

    return 0;
}

void pattern(int n) {
    for (int i = n; i > 0; i--) {
        int print_value = 65; // ASCII value for 'A' is 65
        for (int j = 0; j < i; j++) {
            std::cout << static_cast<char>(print_value) << " ";
            print_value++; // Increment the print value for the next print by 1 to print the next character in order
        }
        std::cout << std::endl;
    }
}
