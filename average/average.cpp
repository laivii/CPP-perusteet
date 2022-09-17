#include <iostream>
using namespace std;

int main(){
    int grade;
    double grades = 0;
    double amount = 0;

    cout << "Program calculates the test grade average. \n Finish inputting with a negative number." << endl;

    cout << "Input grade (4-10): ";
    cin >> grade;

    while (grade > 0){
        if (grade > 3 && grade <= 10){
            grades += grade;
            amount = amount + 1;
        }
        
        cout << "Input grade (4-10): ";
        cin >> grade;
    }

    double average = grades/amount;

    cout << "You inputted " << amount << " grades." << endl;
    cout << "Grade average: " << average << endl;
}