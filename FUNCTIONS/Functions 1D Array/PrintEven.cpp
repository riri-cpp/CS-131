#include <iostream>
using namespace std;

void printEven(int arr[], int size){
    for(int i = 0; i < size; i++){
        if(arr[i] % 2 == 0){
            cout << arr[i] << " ";
        }
    }
}

int main(){
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int array[size];

    cout << "Enter elements of array:" << endl;
    for(int i = 0; i < size; i++){
        cout << "Element " << i + 1 << ": ";
        cin >> array[i];
    }

    printEven(array, size);

    return 0;

}
