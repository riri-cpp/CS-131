#include <iostream>
using namespace std;

typedef struct{
    string name;
    int age;
}Person;

int main(){

    int *ptr_num = nullptr; // this means that ptr_num has not memory address

    // you can't print the value of ptr_num as it is NULL

    if(ptr_num == nullptr){
        ptr_num = new int; // this means that ptr num will have a NEW INTEGER MEMORY ADDRESS;
        *ptr_num = 10;

        cout << "Address: " << ptr_num << endl;
        cout << "Value: " << *ptr_num << endl;

        delete ptr_num; // this means that the memory address of ptr_num will be freed up
    }

    int *array = nullptr; // the array has NO MEMORY ADDRESS
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    
    array = new int[size]; // the array now has a NEW INTEGER MEMORY ADDRESS

    if(array != nullptr){ // the array is no longer null
        for(int i = 0; i < size; i++){
            array[i] = i + 1; // 1, 2, 3, 4, 5...
        }

        for(int i = 0; i < size; i++){
            cout << array[i] << " "; // prints array elements
        }

        delete[] array; // deletes the memory address of the array
    }

    Person *person_ptr = nullptr; // this means that the struct Person has NO MEMORY ADDRESS

    if(person_ptr == nullptr){
        person_ptr = new Person;
        person_ptr -> name = "John Doe"; // instead of (.), we use (->) to access members of a structure
        person_ptr -> age = 30;

        cout << "Name: " << person_ptr -> name << endl; // prints John Doe
        cout << "Age: " << person_ptr -> age << endl; // prints 30
        cout << "Name address: " << &person_ptr -> name << endl; // prints the memory address of the name variable
        cout << "Age address: " << &person_ptr -> age << endl; // prints the memory address of the age variable

        delete person_ptr;
    }

    return 0;
}
