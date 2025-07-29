#include <iostream>
#include <stack>
#include <string>
using namespace std;

void reverseString(string s){
    stack<char> charStack;
    
    for(char c : s){
        charStack.push(c);
    }
    
    while(!charStack.empty()){
        cout << charStack.top();
        charStack.pop();
    }
}

int main(){
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    
    cout << "Reversed string:" << endl;
    reverseString(s);
    
    return 0;
}
