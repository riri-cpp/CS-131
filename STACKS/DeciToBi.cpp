#include <iostream>
#include <stack>
using namespace std;

void deciToBi(int num){
    stack<int> biStack;
    
    if(num == 0){
        biStack.push(0);
    }
    else{
        while(num > 0){
            int remainder = num % 2;
            biStack.push(remainder);
            num = num / 2;
        }
    }
    
    cout << "Binary Equivalent: ";
    
    while(!biStack.empty()){
        cout << biStack.top();
        biStack.pop();
    }
}

int main(){
    int deci;
    
    cout << "Enter a nonnegative number: ";
    cin >> deci;
    
    if(deci < 0){
        cout << "Please enter a nonnegative number.";
        return 1;
    }
    else{
        deciToBi(deci);
    }
    
    return 0;
}
