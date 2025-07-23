#include <iostream>
#include <queue>
using namespace std;

void printQueue(queue<int> queue){

    if(queue.empty()){
        cout << "Queue is empty.";
    }
    
    while(!queue.empty()){
        cout << queue.front() << " ";
        queue.pop();
    }
    
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
    
    cout << "Queue elements: ";
    printQueue(myQueue);
    
    myQueue.pop();
    
    cout << "\nQueue after removing first element: ";
    printQueue(myQueue);
    
    return 0;
}
