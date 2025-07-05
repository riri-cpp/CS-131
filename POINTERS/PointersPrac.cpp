#include <iostream>
using namespace std;

void display(int *n){
    *n = 99;
    cout << "Value of n: " << *n << endl;
}

int main(){
    int x = 10, *x_ptr = &x;

    // access value of x through dereferencing:
    cout << "Value of x: " << *x_ptr << endl;
    // modify value of x through dereferencing:
    *x_ptr = 20;
    cout << "Value of x: " << x << endl;

    // getting value of x_ptr:
    cout << "Value of x_ptr: " << x_ptr << endl;
    // getting address of x:
    cout << "Address of x: " << &x << endl;
    
    cout << "--------------------------------" << endl;

    // pointers using arrays:
    int arr[] = {1, 2, 3, 4, 5}; // each element in this array has its own address
    int *arr_ptr = arr; // no need to use & operator

    // getting value of arr_ptr:
    cout << "Value of arr_ptr: " << arr_ptr << endl;
    // the address that will be printed will often be the address of the first element

    // getting address of arr:
    cout << "Address of arr: " << arr << endl;

    // accessing elements in array using pointer:
    cout << "arr_ptr[0]: " << arr_ptr[0] << endl;
    cout << "arr_ptr[1]: " << arr_ptr[1] << endl;
    cout << "arr_ptr[2]: " << arr_ptr[2] << endl;
    cout << "arr_ptr[3]: " << arr_ptr[3] << endl;
    cout << "arr_ptr[4]: " << arr_ptr[4] << endl;

    // get addresses of elements:
    cout << "Address of arr[0]: " << &arr_ptr[0] << endl;

    int i = 0;
    // accessing elements in array using pointer WHILE using loops:
    while(i < 5){
        cout << "arr_ptr[" << i << "]: " << *arr_ptr << endl;
        arr_ptr++;
        i++;
    };

    int m = 15;
    display(&m);
    cout << "Value of m: " << m;
    
    return 0;
}
