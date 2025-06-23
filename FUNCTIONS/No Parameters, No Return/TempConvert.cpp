#include <iostream>
#include <iomanip>
using namespace std;

void tempConvert(){
    float celsius;
    cout << "Enter the teperature in Celsius: ";
    cin >> celsius;
    float fahrenheit = (celsius * 9 / 5) + 32;
    cout << "Temperature in Fahrenheit: " << fixed << setprecision(2) << fahrenheit << endl;
}

int main(){
    tempConvert();
    return 0;
}
