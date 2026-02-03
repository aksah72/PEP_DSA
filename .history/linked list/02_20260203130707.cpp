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
    Node* node =new Node(val);
    if(head==NULL){
        head = node;
        return;
    }
    int c = 1;
    Node* temp = head;
    while(c!=position-1 && temp !=NULL){
        temp = temp->next;
        c++;
    }
    if(temp == NULL) return;
    node->next = temp->next;
    temp->next->prev = node;
    node->prev = temp;
 }


 void print(Node* head){
    Node* temp = head;
    while(temp!= NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
 }



 int main(){
    Node* head = NULL;
    insertionAtEnd(head,5);
    insertionAtEnd(head,4);
    insertionAtBeg(head,3);
    print(head);
    insertionAtn(head,25,2);
    print(head);
    return 0;
 }