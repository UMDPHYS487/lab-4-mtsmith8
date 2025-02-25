#include <iostream>


int main() {
    for (int i = 1; i <= 10; i++) {
        int n = i;
        for (int j = n - 1; j > 1; j--) {
            n = n * j;
        }
        std::cout << i << "! = " << n << '\n';
    }
}
