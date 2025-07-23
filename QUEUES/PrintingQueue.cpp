#include <iostream>
#include <queue>
using namespace std;

void print(queue<int> queue){
    cout << "Printing..." << endl;
    while(!queue.empty()){
        cout << queue.front() << " pages" << endl;
        queue.pop();
    }
}

int totalPrinted(queue<int> queue){
    int total = 0;
    while(!queue.empty()){
        total += queue.front();
        queue.pop();
    }
    return total;
}

int main(){
    queue<int> printingQueue;
    int numPage;
    while(true){
        cout << "Enter the number of pages to print (0 to exit): ";
        cin >> numPage;
        if(numPage <= 0){
            break;
        }
        printingQueue.push(numPage);
    }
    
    print(printingQueue);
    int total = totalPrinted(printingQueue);
    cout << "Total pages printed: " << total;
    return 0;
}
