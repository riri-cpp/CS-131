#include <iostream>
using namespace std;

struct SavingsBank{
    int bills;
    int coins;
};

int main(){
    SavingsBank s1;
    s1.bills = 0;
    s1.coins = 0;
    int values, n;
    cout << "Enter the number of values: ";
    cin >> n;

    for(int i = 1; i < n + 1; i++){
        cout << "Enter value " << i << ": ";
        cin >> values;

        if(i % 2 == 0){
            s1.coins += values;
        }
        else{
            s1.bills += values;
        }
    }

    cout << "Savings: " << s1.bills << " bills and " << s1.coins << " coins";
    return 0;
}
