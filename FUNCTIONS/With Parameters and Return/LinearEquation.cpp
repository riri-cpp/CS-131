#include <iostream>
#include <iomanip>
using namespace std;

double findY(double x, double slope, double yIntercept){
    double y = slope * x + yIntercept;
    return y;
}

int main(){
    double x, slope, yIntercept;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter slope: ";
    cin >> slope;
    cout << "Enter y intercept: ";
    cin >> yIntercept;

    double y = findY(x, slope, yIntercept);
    cout << "Result: " << fixed << setprecision(2) << y;
    return 0;
}
