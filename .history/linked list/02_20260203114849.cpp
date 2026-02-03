 #include<iostream>
 using namespace std;

 class Node{
    public:
    int data;
    Node* next;
    Node * prev;
    Node(int val){
        data = val;
        next = NULL;
        prev = NULL;
    }
 };

 void insertionAtEnd(Node* &head , int val){
    Node* node = new Node(val);
    if(head==NULL){
        head = node;
        return;
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = node;
    node->prev = temp;
 }


 void insertionAtBeg(Node* &head , int val){
    Node* node = new Node(val);
    if(head==NULL){
        head = node;
        return;
    }
    node->next = head;
    head->prev = node;
    head = node;
 }

 void insertionAtn(Node* &head , int val , int position){
    Node
 }


 void print(Node* head){
    Node* temp = head;
    while(temp!= NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL";
 }



 int main(){
    Node* head = NULL;
    insertionAtEnd(head,5);
    insertionAtEnd(head,50);
    insertionAtBeg(head,1);
    print(head);
    return 0;
 }