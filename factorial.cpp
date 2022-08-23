#include <iostream>
using namespace std;

int main() {
    int integer;
    int factorial;
    int result = 1;

    cout << "Input an integer: ";
    cin >> integer;

    for (int factor = 2; factor <= integer; factor++) {
        factorial = factor * result;
        result = factorial;
    }

    cout << "The factorial of number " << integer << " is " << result << endl;
}