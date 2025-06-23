#include <iostream>
using namespace std;

void sumNums(int a, int b, int c){
    int totalSum = a + b + c;
    cout << totalSum;
}

int main(){
    int num1, num2, num3;
    cout << "Enter first integer: ";
    cin >> num1;
    cout << "Enter second integer: ";
    cin >> num2;
    cout << "Enter third integer: ";
    cin >> num3;

    sumNums(num1, num2, num3);
    return 0;
}
