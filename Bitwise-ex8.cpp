#include <bitset>
#include <iostream>

int main() {
    std::bitset<8> b = 0b01110010;
    std::cout << b << " (initial value)\n";

    for (; b.any(); b >>= 1) {
        while (!b.test(0)) {
            b >>= 1;
        }
        std::cout << b << '\n';
    }

    std::cout << b << " (final value)\n";

    // Now to swap places of 1s and 0s
    std::bitset<8> w = 0b01110010;
    std::cout << w << " (initial value)\n";

    // flip all bits using bitwise NOT (~)
    w = ~w;

    std::cout << w << " (inverted value)\n";

    return 0;
}
