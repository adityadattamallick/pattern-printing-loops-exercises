#include <iostream>

void pattern(int n);

int main() {
    int n;
    std::cin >> n;

    pattern(n);

    return 0;
}

void pattern(int n) {
    int print_value = 1;
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            print_value = 1;
        } else {
            print_value = 0;
        }
        for (int j = 1; j <= i; j++) {
            std::cout << print_value << " ";
            print_value =
                    print_value ^ 1; // Using XOR (^) to toggle between 0 and 1 while printing in the columns in "j"
            /**
             * Other ways of toggling between 0 and 1:
             * print_value = 1
             * print_value = 1 - print_value
             */
        }
        std::cout << "\n";
    }
}
