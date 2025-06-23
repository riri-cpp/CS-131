#include <iostream>
#include <iomanip>
using namespace std; 

void getCalculation(){
    double base;
    double height;
    double result;

    cout <<"Enter the base of the triangle: ";
    cin>>base;

    cout <<"Enter the height of the triangle: ";
    cin>>height;

    result=(base*height)/2;
   
    cout <<"Result: "<< fixed << setprecision(2) << result << endl;
    
}

int main (){
    getCalculation();
    return 0;
}
