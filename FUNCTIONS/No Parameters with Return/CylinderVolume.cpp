#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

const double PI = 3.141592653589793;

double cylinderVolume(){
    double radius, height;
    cout << "Enter the radius of the cylinder: ";
    cin >> radius;
    cout << "Enter the height of the cylinder: ";
    cin >> height;
    double volume = PI * pow(radius, 2) * height;
    return volume * 4;
}

int main(){
    double result = cylinderVolume();
    cout << "Result: " << fixed << setprecision(2) << result << endl;
    return 0;
}
