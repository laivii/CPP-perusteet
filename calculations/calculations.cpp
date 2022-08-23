#include <iostream>
using namespace std;

int main()
{
    int number1;
    int number2;
    int calculation;

    cout << "Choose desired calculation: " << endl;
    cout << "1: Substraction \n 2: Addition \n 3: Multiplication \n 4: Division \n 5: Remainder" << endl;

    cout << "Choose a calculation: ";
    cin >> calculation;

    cout << "Input first number: ";
    cin >> number1;

    cout << "input second number: ";
    cin >> number2;

    switch (calculation) {

        case 1:
            cout << number1 << " - " << number2 << " = " << number1 - number2 << endl;
            break;

        case 2:
            cout << number1 << " + " << number2 << " = " << number1 + number2 << endl;
            break;

        case 3:
            cout << number1 << " * " << number2 << " = " << number1 * number2 << endl;
            break;

        case 4:
            cout << number1 << " / " << number2 << " = " << number1/number2 << endl;
            break;

        case 5:
            cout << number1 << " % " << number2 << " = " << number1%number2 << endl;
            break;
    }
}