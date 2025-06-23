#include <iostream>
using namespace std;

void printPass(){
    cout << "Pass!";
}

void printFail(){
    cout << "Fail!";
}

int main(){
    int num;
    cout << "Enter the grade (between 0 and 100): ";
    cin >> num;

    if (num >= 60){
        printPass();
    }
    else{
        printFail();
    }

    return 0;
}
