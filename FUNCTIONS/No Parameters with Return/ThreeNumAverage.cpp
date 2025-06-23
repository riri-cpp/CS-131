#include <iostream>
#include <iomanip>
using namespace std;

float threeAve(){
    float num1, num2, num3;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the third number: ";
    cin >> num3;
    float average = (num1 + num2 + num3) / 3;
    return average;
}

int main(){
    float result = threeAve();
    cout << "The average of the three numbers is: " << fixed << setprecision(2) << result;
    return 0;
}
