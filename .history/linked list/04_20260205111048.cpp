#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next = NULL;
    }
};

Node* reverse(Node* &head){
    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;

    while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

void print(Node* head){
    if(head==NULL) return;
    while(head != NULL){
        cout<<head->data<<"->";
    }
    cout
}

int main(){

}