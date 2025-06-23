#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void polynomialEvaluate(double a, double b, double c, double d, double x){
    double result = a * pow(x, 3) + b * pow(x, 2) + c * x + d;
    cout << "Value of the polynomial: " << fixed << setprecision(2) << result << endl;
}

int main(){
    double a, b, c, d, x;
    cout << "Enter coefficient a: ";
    cin >> a;
    cout << "Enter coefficient b: ";
    cin >> b;
    cout << "Enter coefficient c: ";
    cin >> c;
    cout << "Enter coefficient d: ";
    cin >> d;
    cout << "Enter the value of x: ";
    cin >> x;
    polynomialEvaluate(a, b, c, d, x);
    return 0;
}
