#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data= val;
        left = NULL;
        right = NULL;
    }
};

int countLeafNode(Node* root){
    
}

int maain(){
    Node* root = NULL;
    root = new Node(5);
    root->left = new Node(4);
    root->right = new Node(3);
    root->left->left = new Node(2);
    root->left->right = new Node(1);
    root->right->left = new Node(10);
    root->right->right = new Node(20);

}
