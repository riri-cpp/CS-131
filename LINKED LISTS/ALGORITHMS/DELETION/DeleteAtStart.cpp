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

void deleteStart(Node *&head){
    Node *nodeDelete = new Node();
    nodeDelete = head;
    head = head -> next;
    delete nodeDelete;
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
    
    deleteStart(head);
    printList(head);
    
    return 0;
}
