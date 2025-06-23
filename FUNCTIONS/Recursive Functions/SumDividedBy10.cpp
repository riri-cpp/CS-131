#include <iostream>
#include <iomanip>
using namespace std;

double SumDiv10(double n){

    if(n == 0){
        return 0;
    }

    return (n / 10) + SumDiv10(n - 1);
}

int main(){
    double n;
    cout << "Enter N: ";
    cin >> n;

    double sum = SumDiv10(n);
    cout << "Sum: " << fixed << setprecision(2) << sum << endl;
    return 0;
}
