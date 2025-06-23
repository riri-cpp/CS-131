#include <iostream>
#include <iomanip>
using namespace std;

float percentage(float value, float total){
    return (value / total) * 100;
}

int main(){
    float value, total;
    cout << "Enter the value: ";
    cin >> value;
    cout << "Enter the total: ";
    cin >> total;
    
    float percent = percentage(value, total);
    cout << fixed << setprecision(2) << percent << "% of " << total << " is " << value;
    return 0;
}
