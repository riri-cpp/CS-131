#include <iostream>
using namespace std;

struct Student{
    char name[100];
    int age;
};

int main(){
    Student s1;
    cout << "Enter the name of the student: ";
    cin >> s1.name;
    cout << "Enter the age of the student: ";
    cin >> s1.age;
    cout << "Name: " << s1.name << endl;
    cout << "Age: " << s1.age << endl;
    return 0;
}
