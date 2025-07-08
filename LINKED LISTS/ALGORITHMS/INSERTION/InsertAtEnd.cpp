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

void insertAtEnd(int n, Node *&head, Node *&tail){
    Node *newValue = new Node();
    Node *currNode = new Node();
    Node *prevNode = new Node();
    
    newValue -> data = n;
    currNode = head;
    
    while(currNode -> next != NULL){
        prevNode = currNode;
        currNode = currNode -> next;
    }
    
    currNode -> next = newValue;
    tail = newValue;
    tail -> next = NULL;
}

void printList(Node *n){
    while(n != NULL){
        cout << n->data << " ";
        n = n -> next;
    }
}

int main(){
    Node *head = new Node();
    Node *tail = new Node();
    
    head -> data = 10;
    head -> next = NULL;
    tail = head;
    tail -> next = head -> next;
    
    printList(head);
    addNode(20, head, tail);
    cout << endl;
    printList(head);
    insertAtEnd(30, head, tail);
    cout << endl;
    printList(head);
    
    return 0;
}
