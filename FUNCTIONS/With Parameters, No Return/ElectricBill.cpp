#include <iostream>
#include <iomanip>
using namespace std;

void calculateBill(float units, float rate){
    float bill = units * rate;
    cout << "Bill Amount: " << fixed << setprecision(2) << bill << endl;
    cout << "Thank you for using our services!";
}

void billDetails(string name, float units, float rate){
    cout << "Customer Name: " << name << endl;
    cout << "Units Consumed: " << fixed << setprecision(2) << units << endl;
    cout << "Rate per Unit: " << fixed << setprecision(2) << rate << endl;
}

int main(){
    string customerName;
    float unitConsumed, rateperUnit;
    cout << "Enter Customer Name: ";
    cin >> customerName;
    cout << "Enter Units Consumed: ";
    cin >> unitConsumed;
    cout << "Enter Rate per Unit: ";
    cin >> rateperUnit;

    billDetails(customerName, unitConsumed, rateperUnit);
    calculateBill(unitConsumed, rateperUnit);
    return 0;
}
