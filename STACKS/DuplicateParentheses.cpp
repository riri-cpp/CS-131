#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool checkDuplicateParentheses(string s) {
    stack<char> st;
    for(char c : s) {
        if(c == ')' && !st.empty() && st.top() == '(') {
            return true;
        } else if(c == ']' && !st.empty() && st.top() == '[') {
            return true;
        } else if(c == '}' && !st.empty() && st.top() == '{') {
            return true;
        } else if(c == '(' || c == '[' || c == '{') {
            st.push(c);
        } else if(c == ')' || c == ']' || c == '}') {
            while(!st.empty() && st.top() != '(' && st.top() != '[' && st.top() != '{') {
                st.pop();
            }
            if(!st.empty()) {
                st.pop();
            }
        }
    }
    return false;
}

int main() {
    string s;
    cout << "Enter a string containing only parentheses: ";
    getline(cin, s);
    if(checkDuplicateParentheses(s)) {
        cout << "Duplicate parentheses found!" << endl;
    } else {
        cout << "No duplicate parentheses found." << endl;
    }
    return 0;
}
