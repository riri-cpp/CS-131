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

void deleteEnd(Node *&head, Node *&tail){
    Node *currentNode = new Node();
    Node *previousNode = new Node();
    
    currentNode = head;
    while(currentNode -> next != NULL){
        previousNode = currentNode;
        currentNode = currentNode -> next;
    }
    
    tail = previousNode;
    tail -> next = NULL;
    delete currentNode;
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
    
    deleteEnd(head, tail);
    printList(head);
    
    return 0;
}
