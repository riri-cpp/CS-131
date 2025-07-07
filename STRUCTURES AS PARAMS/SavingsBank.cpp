#include <iostream>
using namespace std;

struct SavingsBack{
  int bills;
  int coins;
};

int getTotal(struct SavingsBack s){
    int total = s.bills + s.coins;
    return total;
}

int main(){
    SavingsBack s1;
    cout << "Enter the number of bills: ";
    cin >> s1.bills;
    cout << "Enter the number of coins: ";
    cin >> s1.coins;

    s1.bills *= 100;
    s1.coins *= 1;
    
    int total = getTotal(s1);
    
    cout << "Total Savings: " << total;
    return 0;
}
