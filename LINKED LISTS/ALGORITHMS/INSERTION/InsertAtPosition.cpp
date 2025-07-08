#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};

void addNode(int n, Node *&head, Node *&tail){
    Node *newValue = new Node();
    newValue -> data = n;
    
    if(head == NULL){
        head = newValue;
        tail = newValue;
    }
    else{
        tail -> next = newValue;
        tail = newValue;
    }
}

void insertAtPosition(int n, int position, Node *&head){
    Node *newValue = new Node();
    Node *prevValue = new Node();
    Node *currValue = new Node();
    
    currValue = head;
    newValue -> data = n;
    for(int i = 1; i < position; i++){
        prevValue = currValue;
        currValue = currValue -> next;
    }
    prevValue -> next = newValue;
    newValue -> next = currValue;
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
    
    addNode(10, head, tail);
    addNode(20, head, tail);
    addNode(30, head, tail);
    printList(head);
    
    cout << endl;
    
    insertAtPosition(60, 2, head);
    printList(head);
    
    return 0;
}
