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

void inorder(Node* root , vector<int> &vec){
    if(!root) return;
    inorder(root->left,vec);
    vec.push_back(root->data);
    inorder(root->right,vec);
}

void lca(Node* root , int num,vector<int> &nums){
    int val = root->data;
    if(val==num){
        nums.push_back(num);
    }
    else if(num>val){
        lca(root->right,num,nums);
    }
    else{
        lca(root->left,num,nums);
    }
}


int main(){
    Node* root = NULL;
    root = new Node(50);
    root->right = new Node(60);
    root->left = new Node(40);
    root->left->left = new Node(35);
    root->left->right = new Node(45);
    root->right->left = new Node(55);
    root->right->right = new Node(65);

    vector<int> vec;

    inorder(root,vec);

    int p,q;
    cin>>p>>q;

    vector<int> v1;
    vector<int> v2;

    lca(root,p,v1);
    lca(root,p,v1);





}