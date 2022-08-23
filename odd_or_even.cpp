#include <iostream>
using namespace std;

int main() {
    int number = 0;

    cout << "Input an integer: ";
    cin >> number;

    if (number % 2 == 0) {
        cout << "The number " << number << " is even." << endl;
    } else {
        cout << "The number " << number << " is odd." << endl;
    }
}