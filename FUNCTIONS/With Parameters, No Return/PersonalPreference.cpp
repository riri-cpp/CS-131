#include <iostream>
using namespace std;

void personalPref(string color, string animal, int num){
    cout << "Favorite Color: " << color << endl;
    cout << "Favorite Animal: " << animal << endl;
    cout << "Favorite Number: " << num << endl;
}

int main(){
    string favColor, favAnimal;
    int favNum;

    cout << "Enter your favorite color: ";
    cin >> favColor;
    cout << "Enter your favorite animal: ";
    cin >> favAnimal;
    cout << "Enter your favorite number: ";
    cin >> favNum;

    personalPref(favColor, favAnimal, favNum);
    return 0;
}
