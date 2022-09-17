#include <iostream>
using namespace std;

int main(){
    double hours;
    double all_hours;
    int days;
    double listed[30];

    cout << "The program calculates the total amount of work hours during a given time frame and the average work day length. \n How many days: ";
    cin >> days;

    for(int i = 0; i < days; i++){
        cout << "Input hours of workday " << i+1 << ": ";
        cin >> hours;

        listed[i] = hours;
        all_hours += hours;
    }

    double average = all_hours/days;

    cout << "Total work hours: " << all_hours << endl;
    cout << "Average work day length: " << average << endl;
    cout << "Inputted hours: ";

    for(int i = 0; i < days; i++){
        cout << listed[i] << " ";
    }
}