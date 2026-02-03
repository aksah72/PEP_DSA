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

void insertionAtn(Node* &head , int val , int position){
    Node* node = new Node(val);
    Node* temp = head;
    int c = 1;
    while(c<position-1 && temp->next== head){
        temp = temp->next;
        c++;
    }
    if(temp == head) return;
    node->next = temp->next;
    temp->next = node;

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
    insertionAtEnd(head,1);
    insertionAtEnd(head,2);
    insertionAtEnd(head,3);
    print(head);
    insertionAtBeg(head,0);
    print(head);
    insertionAtn(head,25,2);
    print(head);

}