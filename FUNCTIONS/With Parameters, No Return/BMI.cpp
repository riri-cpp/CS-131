#include <iostream>
#include <iomanip>
using namespace std;

void bmiCalculator(float weight, float height){
    float BMI = weight / (height * height);
    cout << "BMI: " << fixed << setprecision(2) << BMI << endl;
}

int main(){

    float weight, height;

    cout << "Enter your height (in meters): ";
    cin >> height;
    cout << "Enter your weight (in kilograms): ";
    cin >> weight;

    bmiCalculator(weight, height);

    return 0;
}
