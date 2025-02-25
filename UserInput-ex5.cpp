#include <iostream>

int factorial(int n) {
    for (int i = n - 1; i > 1; i--) {
        n = n * i;
    }
    return n;
}

int main() {
    int n;
    std::cout << "Please enter an integer value: [N]\n";
    std::cin >> n;
    std::cout << "The value you entered is " << n << " and its factorial is "
              << factorial(n) << '\n';
}
