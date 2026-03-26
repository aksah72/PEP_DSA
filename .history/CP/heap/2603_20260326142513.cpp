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

int sum=0;

void preorder(Node* root , int currSum){
    if(!root) return ;
    /*if(!root->left && !root->right) {
        sum += currSum*10+root->data;
        return;
    }*/
    preorder(root->left , currSum*10+root->data);
    if(!root->left && !root->right) {
        sum += currSum*10+root->data;
        return;
    }
    preorder(root->right , currSum*10+root->data);

}

int main(){
    Node* root = NULL;
    root = new Node(1);
    root->right = new Node(5);
    root->left = new Node(2);
    root->left->left = new Node(3);
    root->left->right = new Node(4);

    preorder(root,0);

    cout<<sum<<endl;

}