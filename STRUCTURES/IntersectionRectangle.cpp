#include <iostream>
using namespace std;

struct Rectangle {
    int x;
    int y;
    int w;
    int h;
};

int main() {
    Rectangle r1, r2;
    int x_inter, y_inter, w_inter, h_inter;
    
    cout << "Enter the coordinates (x,y) and dimensions (w,h) of rectangle a: ";
    cin >> r1.x >> r1.y >> r1.w >> r1.h;
    cout << "Enter the coordinates (x,y) and dimensions (w,h) of rectangle b: ";
    cin >> r2.x >> r2.y >> r2.w >> r2.h;
    
    int r1_right = r1.x + r1.w;
    int r2_right = r2.x + r2.w;
    int r1_top = r1.y + r1.h;
    int r2_top = r2.y + r2.h;
    
    x_inter = max(r1.x, r2.x);
    y_inter = max(r1.y, r2.y);
    w_inter = max(0, min(r1_right, r2_right) - x_inter);
    h_inter = max(0, min(r1_top, r2_top) - y_inter);
    
    cout << "Result: (" << x_inter << ", " << y_inter << ", " << w_inter << ", " << h_inter << ")";

    return 0;
