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
    if(position==1){
        node->next = head->next;
        node = head;
        return;
    }
    Node* temp = head;
    int c = 1;
    while(c!=position-1 && temp != NULL){
        temp = temp->next;
        c++;
    }
    if(temp==NULL) return;
    Node* curr = temp->next;
    temp->next = node;
    node->next = curr;

}

void deleteAtend(Node* &head){
    if(head->next == NULL ) head = NULL;
    Node* temp = head;
    while(temp->next->next !=NULL){
        temp = temp->next;
    }
    temp->next = NULL;
}

void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}


Node* solve(Node* head){
    Node* odd = head;
    Node* even = head->next;
    int i = 3;
    NOde
}



int main(){
    Node * head = NULL;
    insertionAtEnd(head,5);
    insertionAtEnd(head,50);
    insertionAtEnd(head,500);
    insertionAtEnd(head,5000);
    //print(head);
    //cout<<endl;
    insertionAtBeg(head , 1);
    insertionAtn(head,15,3);
    print(head);
    deleteAtend(head);
    cout<<endl; 
    print(head);
    return 0;
}