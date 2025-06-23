#include <iostream>
#include <iomanip>
using namespace std;

float findMinimum(float a, float b, float c){
    float minimum;
    if (a <= b && a <= c) {
        minimum = a;
    } 
    else if (b <= a && b <= c){
        minimum = b;
    }
    else{
        minimum = c;
    }
    return minimum;
}

int main(){
    float num1, num2, num3;
    cout << "Enter first value: ";
    cin >> num1;
    cout << "Enter second value: ";
    cin >> num2;
    cout << "Enter third value: ";
    cin >> num3;

    float minimum = findMinimum(num1, num2, num3);
    cout << "Minimum Value: " << fixed << setprecision(3) << minimum;
    return 0;
}
