#include <iostream>

void pattern(int n);

int main() {
    int n;
    std::cin >> n;

    pattern(n);

    return 0;
}

void pattern(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n - i + 1; j++) {
            std::cout << j + 1 << " ";
        }
        std::cout << "\n";
    }
}
