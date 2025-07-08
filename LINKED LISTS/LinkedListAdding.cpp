#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};

void addNode(int n, Node *&head, Node *&tail){
    Node *newNode = new Node();
    newNode -> data = n;
    newNode -> next = NULL;
    
    if(head == NULL){
        head = newNode;
        tail = newNode;
    }
    else{
        tail -> next = newNode;
        tail = tail -> next;
    }
}

void printList(Node *n){
    while(n != NULL){
        cout << n->data << " ";
        n = n -> next;
    }
}

int main(){
    Node *head = NULL; 
    Node *tail = NULL;
    int n;
    
    cout << "How many values of n do you want to add?: ";
    cin >> n;

    for (int i = 0; i < n; i++){
        int value;
        cout << "Enter value " << i + 1 << ": ";
        cin >> value;
        addNode(value, head, tail);
    }
    
    
    cout << "LINKED LIST:" << endl;
    printList(head);
    
    return 0;
}
