#include <iostream>
using namespace std;

int main(){
    int radius;
    float pie = 3.142;

    cout<<"Input circle radius: ";
    cin>> radius;

    float area = pie * radius * radius;

    cout<<"Circle area with the given radius: " << area << endl;
}