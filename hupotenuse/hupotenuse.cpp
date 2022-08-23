#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double number1 = 0;
    double number2 = 0;

    cout << "Input first triangle leg: ";
    cin >> number1;

    cout << "Input second triangle leg: ";
    cin >> number2;

    double hypotenuse = sqrt(number1 * number1 + number2 * number2);

    cout << "Hypotenuse length: " << hypotenuse << endl;
}