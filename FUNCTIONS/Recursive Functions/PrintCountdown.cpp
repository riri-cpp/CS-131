#include <iostream>
using namespace std;

void printCountdown(int n){
    if (n < 0){
        return;
    }
    
    cout << n << endl;
    return printCountdown(n - 1);
}

int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    printCountdown(n);
    return 0;
}
