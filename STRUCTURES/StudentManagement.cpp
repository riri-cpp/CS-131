#include <iostream>
using namespace std;

struct Student{
    char name[50];
    int rollNumber;
    int marks[5];
    int totalMarks;
};

int main(){
    Student s1;
    s1.totalMarks = 0;
    cout << "Enter student details:" << endl;
    cout << "Name: ";
    cin.getline(s1.name, 50);
    cout << "Roll Number: ";
    cin >> s1.rollNumber;
    cout << "Enter marks for 5 subjects:" << endl;

    for(int i = 0; i < 5; i++){
        cout << "Subject " << i + 1 << ": ";
        cin >> s1.marks[i];
        s1.totalMarks += s1.marks[i];
    }

    cout << endl;
    
    cout << "Student details:" << endl;
    cout << "Name: " << s1.name << endl;
    cout << "Roll Number: " << s1.rollNumber << endl;
    cout << "Marks:" << endl;
    
    for(int i = 0; i < 5; i++){
        cout << "Subject " << i + 1 << ": " << s1.marks[i] << endl;
    }
    
    cout << "Total Marks: " << s1.totalMarks;
    return 0;
}
