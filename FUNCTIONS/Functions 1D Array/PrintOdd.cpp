#include <iostream>
using namespace std;

void printOdd(int arr1[], int arr2[], int size1, int size2){
    
    cout << "Odd elements of the first array:" << endl;
    for(int i = 0; i < size1; i++){
        if(arr1[i] % 2 != 0){
            cout << arr1[i] << " ";
        }
    }

    cout << endl;

    cout << "Odd elements of the second array:" << endl;
    for(int i = 0; i < size2 ; i++){
        if(arr2[i] % 2 != 0){
            cout << arr2[i] << " ";
        }
    } 
}

int main(){
    int s1, s2;
    cout << "Enter the size of the first array: ";
    cin >> s1;
    cout << "Enter the size of the second array: ";
    cin >> s2;

    int array1[s1], array2[s2];

    cout << "Enter elements of the first array" << endl;
    for(int i = 0; i < s1; i++){
        cout << "Element " << i + 1 << ": ";
        cin >> array1[i];
    }

    cout << "Enter elements of the second array" << endl;
    for(int i = 0; i < s2; i++){
        cout << "Element " << i + 1 << ": ";
        cin >> array2[i];
    }

    printOdd(array1, array2, s1, s2);
    return 0;
}
