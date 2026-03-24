#include<iostream>
#include<vector>
#include<stack>
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

void inorder(node* root){
    stack<node*>st;
    while(root != NULL || !st.empty()){
        while(root != NULL){
            st.push(root);
            root = root->left;
        }
        root = st.top();
        st.pop();
        cout<<root->data<<" ";
        root = root->right;
    }
}

int main(){
    Node* root = NULL;
    root = new Node(1);
    root->right = new Node(8);
    root->right->left = new Node(4);
    root->right->left->left = new Node(2);
    root->right->left->right = new Node(3);
    root->right->left->left->right = new Node(9);
    inorder(root)
}