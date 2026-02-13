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
    if(root == NULL) return 0 ;
    if(root->left == NULL && root->right == NULL) return 1;
    int x = countLeafNode(root->left);
    int y = countLeafNode(root->right);
    return x+y;

}

int main(){
    Node* root = NULL;
    root = new Node(5);
    root->left = new Node(4);
    root->right = new Node(3);
    root->left->left = new Node(2);
    root->left->right = new Node(1);
    root->right->left = new Node(10);
    root->right->right = new Node(20);
    int a = countLeafNode(root);
    cout<<a;

}
