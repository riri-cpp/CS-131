#include <iostream>
using namespace std;

void sumGreaterThan(int arr[], int size, float x){
    float sum = 0.0;
    for(int i = 0; i < size; i++){
        if(arr[i] > x){
            sum += arr[i];
        }
    }
    cout << "The sum of the elements greater than " << x << " is: " << sum << endl;
}

int main(){
    int size;
    float num;
    cout << "Enter the size of the array: ";
    cin >> size;

    int array[size];

    cout << "Enter the elements of the array:" << endl;
    for(int i = 0; i < size; i++){
        cout << "Element " << i + 1 << ": ";
        cin >> array[i];
    }

    cout << "Enter a number: ";
    cin >> num;

    sumGreaterThan(array, size, num);

    return 0;
}
