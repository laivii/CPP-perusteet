#include <iostream>
using namespace std;

int main(){
    char drink;
    int sugar;

    cout << "Do you drink coffee or tea? (c/t) ";
    cin >> drink;

    cout << "With how many cubes of sugar?";
    cin >> sugar;

    switch (drink) {
        case 'c':
            if (0 <= sugar && sugar <= 2) {
                cout << "Coffee certainly is invigorating!" << endl;
                break;
            } else if (sugar >= 3){
                cout << "Well, coffee can taste pretty intense..." << endl;
                break;
            } else {
                cout << "An error occurred in the program!" << endl;
                break;
            }
            break;

        case 't':
            if (0 <= sugar && sugar <= 2) {
                cout << "Tea can have a soothing effect!" << endl;
            } else if (sugar >= 3){
                cout << "Guess you enjoy your tea overly sweet?" << endl;
            } else {
                cout << "An error occurred in the program!" << endl;
            }
            break;
    
        default:
            cout << "An error occurred in the program!" << endl;
            break;
    }
}