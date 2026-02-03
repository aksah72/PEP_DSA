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



int main(){
    Node *n1 = new Node(1);
    Node *n2 = new Node(2);
    n1->next = n2;
    
}