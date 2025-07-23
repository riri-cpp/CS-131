#include <iostream>
#include <queue>
using namespace std;

int sumOfElements(queue<int> queue){
    int sum = 0;
    while(!queue.empty()){
        sum += queue.front();
        queue.pop();
    }
    
    return sum;
}

int main(){
    queue<int> myQueue;
    int size, element;
    
    cout << "Enter the number of elements in the queue: ";
    cin >> size;
    
    cout << "Enter the elements of the queue: ";
    for(int i = 0; i < size; i++){
        cin >> element;
        myQueue.push(element);
    }
    
    int sum = sumOfElements(myQueue);
    cout << "Sum of all elements in the queue: " << sum;
    
    return 0;
}
