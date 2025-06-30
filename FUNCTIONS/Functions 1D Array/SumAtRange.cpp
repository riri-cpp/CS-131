#include <iostream>
using namespace std;

void sumAtRange(int arr[], int size, int start, int end){
    int sum = 0;
    for(int i = start; i <= end; i++){
        sum += arr[i];
    }
    cout << "Sum of elements from index " << start << " to " << end << ": " << sum << endl;
}

int main(){
    int s, start, end;
    cout << "Enter the size of the array: ";
    cin >> s;
    int arr[s];
    cout << "Enter elements of the array:" << endl;
    for(int i = 0; i < s; i++){
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << "Enter the start index: ";
    cin >> start;
    cout << "Enter the end index: ";
    cin >> end;

    sumAtRange(arr, s, start, end);
    return 0;
}   
