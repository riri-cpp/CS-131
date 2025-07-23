#include <iostream>
#include <queue>
using namespace std;

void removeOdd(queue<int> &oldQueue){ // this algorithm works for reconstructing queues
    queue<int> newQueue;
    
    while(!oldQueue.empty()){
        
        int evenNum = oldQueue.front();
        oldQueue.pop();
        
        if(evenNum % 2 == 0){
            newQueue.push(evenNum);
        }
    }
    
    oldQueue = newQueue;
}

void printQueue(queue<int> queue){
    while(!queue.empty()){
        cout << queue.front() << " ";
        queue.pop();
    }
}

int main(){
    queue<int> myQueue;
    int size, element;
    cout << "Enter the number of elements: ";
    cin >> size;
    
    for(int i = 0; i < size; i++){
        cout << "Enter element " << i+1 << ": ";
        cin >> element;
        myQueue.push(element);
    }
    
    cout << "Before removing odd numbers: ";
    printQueue(myQueue);
    
    removeOdd(myQueue);
    
    cout << "\nAfter removing odd numbers: ";
    printQueue(myQueue);
    
    return 0;
}
