#include <iostream>
using namespace std;

int two_sum(int a, int b){
    return a + b;
}

int main(){
    int x, y;
    cout << "Enter first number: ";
    cin >> x;
    cout << "Enter second number: ";
    cin >> y;

    int sum = two_sum(x, y);
    cout << "Sum of numbers: " << sum;
    return 0;
}
