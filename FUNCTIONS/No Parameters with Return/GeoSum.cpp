#include <iostream>
#include <iomanip>
using namespace std;

const float PI = 3.141592653589793;

float squareArea(){
    float side;
    cout << "Enter the side of the square: ";
    cin >> side;
    float area = side * side;
    return area;
}

float circleArea(){
    float radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    float area = PI * (radius * radius);
    return area;
}

int main(){
    float area_s = squareArea();
    float area_c = circleArea();
    float totalSum = area_s + area_c;
    cout << "Total area (square + circle): " << fixed << setprecision(2) << totalSum;
    return 0;
}
