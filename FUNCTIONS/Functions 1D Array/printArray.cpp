#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int array[size];

    cout << "Enter elements of the array: " << endl;
    for(int i = 0; i < size; i++){
        cout << "Element " << i + 1 << ": ";
        cin >> array[i];
    }

    printArray(array, size);

    return 0;
}
