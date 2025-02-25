#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Input a number: ";
    cin >> n;

    // encode conditions into a single value with ternary assignment
    int caseValue = (n < 10 && n % 2 == 0) ? 1 : (n % 2 != 0) ? 2 : 3;

    // note, switch cases need constants or the value must be known at compile time
    switch (caseValue) {
        case 1:  // even and less than 10
            cout << n << " squared is " << n * n << '\n';
            break;
        case 2:  // odd number
            cout << n << " divided by 2 is " << n / 2.0 << '\n';
            break;
        default:
            cout << "hahaha\n";
    }

    return 0;
}
