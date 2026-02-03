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

void print(Node* head){
    Node* temp = head;
    while(temp->next != head){
        cout<<temp->data<<"->";
    }
    cout<<"NULL"<<endl
}

int main(){

}