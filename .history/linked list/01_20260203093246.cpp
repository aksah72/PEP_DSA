#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int val){
        data = val;
        next = NULL;
    }
};

void insertionAtEnd(Node* &head , int val){
    Node* node = new Node(val);
    if(head==NULL){
        head = node;
        return;
    }
    Node * temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = node;
}







void print(Node* &head){
    Node* temp = head;
    while(temp->next == NULL){
        cout<<temp->data<<endl;
        temp = temp->next;
    }
}



int main(){
    Node * head = NULL;
    insertionAtEnd(head,5);
    insertionAtEnd(head,50);
    insertionAtEnd(head,500);
    insertionAtEnd(head,5000);
    print(head);
    return 0;
}