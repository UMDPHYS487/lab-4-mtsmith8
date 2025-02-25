#include <iostream>

int factorial(int n) {
    for (int i = n - 1; i > 1; i--) {
        n = n * i;
    }
    return n;
}

int main() {
    for (int i = 1; i <= 10; i++) {
        std::cout << i << "! = " << factorial(i) << '\n';
    }
}
