#include <iostream>
using namespace std;

int main() {
    int integer;

    cout << "Input an integer: ";
    cin >> integer;

    for (int i = 1; i <= integer; i++) {
        cout << i << endl;
    }
}