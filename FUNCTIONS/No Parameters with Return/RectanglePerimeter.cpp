#include <iostream>
#include <iomanip>
using namespace std;

double rectanglePerimeter(){
    double length, width, perimeter;
    cout << "Enter length of the rectangle: ";
    cin >> length;
    cout << "Enter width of the rectangle: ";
    cin >> width;
    perimeter = 2 * (length + width);
    return perimeter;
}

int main(){
    double result = rectanglePerimeter();
    cout << "Perimeter of the rectangle: " << fixed << setprecision(2) << result << endl;
    return 0;
}
