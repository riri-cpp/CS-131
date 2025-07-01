#include <iostream>
using namespace std;

struct student{
    int age;
    string name;
    string address;
    int id;
    string course;
    int year;

};

typedef struct{
    int totalWheels;
    int totalDoors;
    string color;
    string brand;
    string model;
} car; // name of the struct

void printInfoStudent(student);
void printInfoCar(car);

int main(){
    struct student s1; // needs the keyword struct to declare a struct
    s1.age = 20;
    s1.name = "Rheman";
    s1.address = "068 Palindan Ibaan Batangas";
    s1.id = 2403912;
    s1.course = "BS Computer Science";
    s1.year = 2025;

    printInfoStudent(s1);

    cout << "\n";
    cout << "--------------------------------" << endl;
    cout << "\n";

    car c1; // doesn't need the keyword struct to declare a struct (typedef is used to declare a struct)
    c1.totalWheels = 4;
    c1.totalDoors = 4;
    c1.color = "Red";
    c1.brand = "Toyota";
    c1.model = "Corolla";

    printInfoCar(c1);
}

void printInfoStudent(struct student s){ // struct student s is the parameter, 'struct' was used to declare the struct
    cout << "Age: " << s.age << endl;
    cout << "Name: " << s.name << endl;
    cout << "Address: " << s.address << endl;
    cout << "ID: " << s.id << endl;
    cout << "Course: " << s.course << endl;
    cout << "Year: " << s.year << endl;
}

void printInfoCar(car c){ // no need to use struct keyword because it's already declared in the typedef
    cout << "Total Wheels: " << c.totalWheels << endl;
    cout << "Total Doors: " << c.totalDoors << endl;
    cout << "Color: " << c.color << endl;
    cout << "Brand: " << c.brand << endl;
    cout << "Model: " << c.model << endl;
}
