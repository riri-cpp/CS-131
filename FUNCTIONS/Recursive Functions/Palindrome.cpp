#include <iostream>
#include <string>
using namespace std;

// Recursive function to check if a string is a palindrome
bool isPalindrome(string str, int start, int end) {
    // Base case: if we've checked all characters or reached the middle
    if (start >= end) {
        return true;
    }
    
    // If characters at start and end positions don't match, it's not a palindrome
    if (str[start] != str[end]) {
        return false;
    }
    
    // Recursive case: check the substring from start+1 to end-1
    return isPalindrome(str, start + 1, end - 1);
}

int main() {
    string input;
    
    cout << "Enter a string to check if it's a palindrome: ";
    getline(cin, input);
    
    bool result = isPalindrome(input, 0, input.length() - 1);

    if(result == true){
        cout << input << " is a palindrome." << endl;
    } 
    else{
        cout << input << " is not a palindrome." << endl;
    }
    
    return 0;
}
