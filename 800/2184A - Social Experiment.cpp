#include <iostream>

int main() {
    int t;
    std::cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        std::cin >> n;
        if (n == 2) {
            std::cout << 2 << '\n';
        } else if (n == 3) {
            std::cout << 3 << '\n';
        } else if (n % 2 == 0) {
            std::cout << 0 << '\n';
        } else {
            std::cout << 1 << '\n';
        }
    }

    return 0;
}
