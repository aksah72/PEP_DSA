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
    Node * temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = node;
}



int main(){
    Node * head = NULL;
    insertionAtEnd(head,5);
    return 0;
}