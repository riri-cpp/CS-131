#include <iostream>
#include <queue>
using namespace std;

int findMaxElement(queue<int> queue){
    int max = queue.front();
    queue.pop();
    while(!queue.empty()){
        int current = queue.front();
        queue.pop();
        if(current > max){
            max = current;
        }
    }
    
    return max;
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
    
    int max = findMaxElement(myQueue);
    
    cout << "Maximum element in the queue: " << max;
    
    return 0;
}
