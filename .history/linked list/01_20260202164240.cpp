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
    
}



int main(){
    Node * n1 = new Node(1);
    Node *
    return 0;
}