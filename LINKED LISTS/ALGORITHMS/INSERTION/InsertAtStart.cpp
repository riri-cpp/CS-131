#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};

void insertAtStart(int n, Node *&head){
    Node *newValue = new Node();
    newValue -> data = n;
    newValue -> next = head;
    head = newValue;
}

void printList(Node *n){
    while(n != NULL){
        cout << n->data << " ";
        n = n -> next;
    }
}

int main(){
    Node *head, *tail = new Node();
    head -> data = 10;
    tail -> data = head -> data;
    tail = head;
    head -> next = NULL;
    head -> next = tail -> next;
    
    printList(head);
    cout << endl;
    insertAtStart(40, head);
    printList(head);
    return 0;
}
