#include <iostream>
using namespace std;

int y; // memory addresses can vary after executing the compiled code
int *x;

int main() {
    x = &y;
    y = 8;
    cout << "Value of pointer before: " << x << '\n';
    y = 42;
    cout << "Value of pointer after: " << x << '\n';

    // Value of pointer x does not change because only the value of y
    // is changing, not the address

    cout << "Dereferenced value of pointer: " << *x << '\n';
    cout << "Value of y (pointed to variable): " << y << '\n';

    // The dereferenced value of the pointer is the value of variable pointed to (y)

    y = 55;
    cout << "New value of y: " << y << '\n';
    cout << "Deref value of pointer after change in y: " << *x << '\n';

    // We see the dereferenced pointer value changes with the y variable's value

}
