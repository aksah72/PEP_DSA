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

void insertionAtBeg(Node* &head , int val){
    Node* node = new Node(val);
    if(head == NULL){
        head == node;
        return;
    }
    else {
        node->next = head;
        head = node;
    }
}


void insertionAtn(Node* &head , int val , int position){
    Node* node = new Node(val);
    if(head == NULL) node = head;
    Node* temp = head;
    int c = 0;
    while(c<=position){
        temp = temp->next;
    }
    temp->next = node;

}


void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
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
    cout<<endl;
    insertionAtBeg(head , 1);
    print(head);
    return 0;
}