#include <iostream>

using namespace std;

int recursiveFibonacci(int n){
    if(n <= 1){
        return n;
    }
    else{
        return recursiveFibonacci(n-1) + recursiveFibonacci(n-2);
    }
}

int main(){

    int n, sum = 0;
    cout << "Enter the value of n: ";
    cin >> n;

    for(int i = 1; i < n + 1; i++){
        sum += recursiveFibonacci(i);
    }

    cout << "Sum of the first " << n << " Fibonacci numbers is " << sum;
    return 0;
}
