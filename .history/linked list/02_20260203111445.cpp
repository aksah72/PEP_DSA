 #include<iostream>
 using namespace std;

 class Node{
    public:
    int data;
    Node* next;
    Node * prev;
    Node(int val){
        data = val;
        next , prev = NULL;
    }
 };

 void insertionAtEnd(Node* &head , int val){
    Node* node = new Node(val);
    if(head==NULL){
        node = head;
        return;
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = node;
    node->prev = temp;
 }


 void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data
    }
 }



 int main(){
    Node* head = NULL;
    insertionAtEnd(head,5);
 }