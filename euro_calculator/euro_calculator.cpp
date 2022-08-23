#include <iostream>
using namespace std;

int main(){
    int amount;
    float rate = 0.727802;

    cout<<"how much dollars do you want to exchange?: ";
    cin>> amount;

    cout<<"Amount in euros: " << amount*rate << endl;

}