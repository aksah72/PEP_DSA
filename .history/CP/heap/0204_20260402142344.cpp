#include<iostream>
#include<vector>
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

int ans = -1;
int cnt =0;
int sum=0;


void inorder(Node* root , int k){
    if(!root || ans !=-1) return;

    inorder(root->left,k);
    cnt++;
    if(cnt==k) ans = root->data;
    inorder(root->right,k);
}


void inorderTraversal(Node* root){
    if(!root) return;

    inorderTraversal(root->left);
    cout<<root->data<<" ";
    inorderTraversal(root->right);
}


void preorder(Node* root){
    if(!root) return;

    if(root->left && !root->right) sum += root->data;
    preorder(root->left);
    preorder(root->right);
}
int main(){
    Node* root = NULL;
    root = new Node(1);
    root->right = new Node(3);
    root->left = new Node(2);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->right->left = new Node(6);
    root->left->right->left->left = new Node(6);


    //root->right->left = new Node(7);
    root->right->right = new Node(7);
    //root->left->left->right = new Node(8);
    //root->left->right->left = new Node(6);
    //root->right->left->right = new Node(10);
    root->right->right->left = new Node(8);


    int k;
    cin>>k;
    inorderTraversal(root);
    cout<<endl;
    inorder(root,k);
    cout<<ans<<endl;
    preorder(root);
    cout<<sum<<endl;
    return 0;
}