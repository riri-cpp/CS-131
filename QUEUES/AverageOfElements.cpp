#include <iostream>
#include <iomanip>
#include <queue>
using namespace std;

double averageOfElements(queue<double> queue){
    double total = 0.0;
    double count = 0.0;
    
    while(!queue.empty()){
        total += queue.front();
        queue.pop();
        count++;
    }
    
    return total / count;
}

int main(){
    queue<double> myQueue;
    int size;
    double elements;
    
    cout << "Enter the number of elements: ";
    cin >> size;
    
    for(int i = 0; i < size; i++){
        cout << "Enter element " << i+1 << ": ";
        cin >> elements;
        myQueue.push(elements);
    }
    
    double average = averageOfElements(myQueue);
    
    cout << "Average: " << fixed << setprecision(2) << average;
    
    return 0;
}
