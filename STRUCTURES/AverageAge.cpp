#include <iostream>
using namespace std;

struct Person{
  char name[50];
  int age;
};

int main(){
    Person p1;
    int n, sum = 0;
    cout << "Enter the number of people: ";
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cout << "Enter the name of person " << i + 1 << ": ";
        cin >> p1.name;
        cout << "Enter the age of person " << i + 1 << ": ";
        cin >> p1.age;
        sum += p1.age;
    }
    
    int average = sum / n;
    
    cout << "The average age of the people is " << average;
    return 0;
   
}
