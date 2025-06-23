#include <iostream>
using namespace std;

void buildHouse(){
    int houseNum;
    const int MATCHSTICKS = 5;

    cout << "Enter the number of houses to make: ";
    cin >> houseNum;
    int totalMatchSticks = houseNum * MATCHSTICKS + 1;
    cout << "Number of matchsticks needed: " << totalMatchSticks << endl;
}

int main(){
    buildHouse();
    return 0;
}
