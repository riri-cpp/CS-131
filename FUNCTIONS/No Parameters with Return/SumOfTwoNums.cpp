#include <iostream>
using namespace std;

int sum(){
    int num1 = 5, num2 = 10;    
    int sum = num1 + num2;
    return sum;
}

int main(){
    int result = sum();
    cout << "Sum of numbers: " << result << endl;
    return 0;
}
