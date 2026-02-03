#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }
};

void insertionAtEnd(Node* &head, int val){
    Node* node = new Node(val);
    if(head == NULL){
        head = node;
        head->next = head;
        return;
    }
    Node* temp = head;
    while(temp->next != head){
        temp = temp->next;
    }
    node->next = head;
    temp->next = node;
}


void insertionAtBeg(Node* &head , int val){
    Node* node = new Node(val);
    if(head == NULL){
        head = node;
        head->next = head;
        return;
    }
    Node* temp = head->next;
    while(temp->next != head){
        temp = temp->next;
    }
    node->next = head;
    temp->next = node;
    head = node;
}


void print(Node* head){
    Node* temp = head;
    do{
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    while(temp != head);
    cout<<"NULL"<<endl;
}

int main(){
    Node* head = NULL;
    //insertionAtEnd(head,1);
    insertionAtEnd(head,2);
    insertionAtEnd(head,3);
    insertionAtBeg(head,0);
    print(head);

}