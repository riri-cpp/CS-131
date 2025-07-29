#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool balancedParentheses(string s){
    stack<char> charStack;
    for(char c : s){
        if(c == '(' || c == '{' || c == '['){
            charStack.push(c);
        }
        else if(c == ')' || c == '}' || c == ']'){
            if(charStack.empty()){
                return false;
            }
            char top = charStack.top();
            charStack.pop();
            if( (c == ')' && top != '(') || (c == '}' && top != '{') || (c == ']' && top != '[') ){
                return false;
            }
        }
    }
    
    return charStack.empty();
}

int main(){
    
    string phrase;
    cout << "Enter a string with parentheses: ";
    getline(cin, phrase);
    
    bool result = balancedParentheses(phrase);
    
    if(result){
        cout << "The parentheses are balanced!";
    }
    else{
        cout << "The parentheses are not balanced!";
    }
    
    return 0;
}
