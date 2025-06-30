#include <iostream>
using namespace std;

void printMinValue(int arr[], int size){
    int min = arr[0];
    for(int i = 0; i < size; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    cout << "Minimum value in the array is: " << min;
}

int main(){
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int array[size];

    cout << "Enter elements of the array:" << endl;
    for(int i = 0; i < size; i++){
        cout << "Element " << i + 1 << ": ";
        cin >> array[i];
    }

    printMinValue(array, size);

    return 0;
}
