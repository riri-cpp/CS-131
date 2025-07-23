#include <iostream>
#include <queue>
using namespace std;

void removeElements(queue<int> &queue, int range){ // pass by reference to modify the original queue
    int count = 1;
    while(!queue.empty() && count <= range){
        queue.pop();
        count++;
    }
}

void printQueue(queue<int> queue){
    while(!queue.empty()){
        cout << queue.front() << " ";
        queue.pop();
    }
}

int main(){
    queue<int> myQueue;
    int size, element, n;
    
    cout << "Enter the number of elements: ";
    cin >> size;
    
    for(int i = 0; i < size; i++){
        cout << "Enter element " << i+1 << ": ";
        cin >> element;
        myQueue.push(element);
    }
    
    cout << "Enter the number of elements to remove: ";
    cin >> n;
    removeElements(myQueue, n);
    
    cout << "After removing " << n << " elements: ";
    printQueue(myQueue);
    
    return 0;
}
