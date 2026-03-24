#include<iostream>
#include<vector>
#include<stack>
#include<queue>
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

void inorder(Node* root){
    stack<Node*>st;
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

void bfs(Node* root){
    queue
}
int main(){
    Node* root = NULL;
    root = new Node(1);
    root->right = new Node(3);
    root->left = new Node(2);
    root->left->left = new Node(5);
    root->left->right = new Node(4);
    root->right->left = new Node(7);
    root->right->right = new Node(6);
    root->left->left->right = new Node(8);
    root->left->right->left = new Node(9);
    root->right->left->right = new Node(10);
    root->right->right->left = new Node(12);

    inorder(root);
    return 0;
}