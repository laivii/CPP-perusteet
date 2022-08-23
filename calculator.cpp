#include <iostream>
using namespace std;

int main(){
    int number1;
    int number2;

    cout<<"Input first integer: ";
    cin>> number1;

    cout<<"Input second integer: ";
    cin>> number2;

    cout<< number1 << "+" << number2 << " = " << number1 + number2 <<endl;
    cout<< number1 << "-" << number2 << " = " << number1 - number2 <<endl;
    cout<< number1 << "*" << number2 << " = " << number1 * number2 <<endl;
    cout<< "Remainder: " << number1%number2 << endl;

}