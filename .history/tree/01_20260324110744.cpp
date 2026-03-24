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

void preorder(Node * root , vector<int> &result){
    if(root == NULL) return;
    result.push_back(root->data);
    preorder(root->left,result);
    preorder(root->right,result);
}

void postorder(Node * root , vector<int> &result){
    if(root == NULL) return;
    preorder(root->left,result);
    preorder(root->right,result);
    result.push_back(root->data);
}

void inorder(Node * root , vector<int> &result){
    if(root == NULL) return;
    inorder(root->left,result);
    cout<<root->data<<"UP"<<endl;
    //result.push_back(root->data);
    inorder(root->right,result);
    //cout<<root->data<<"DOWN"<<endl;
}

int countLeafNode(Node* root){
    if(root == NULL) return 0 ;
    if(root->left == NULL && root->right == NULL) return 1;
    int x = countLeafNode(root->left);
    int y = countLeafNode(root->right);
    return x+y;

}

int main(){
    Node* root = NULL;
    root = new Node(1);
    //root->left = new Node(4);
    root->right = new Node(8);
    //root->left->left = new Node(4);
    //root->left->right = new Node(1);
    root->right->left = new Node(4);
    //root->right->right = new Node(20);
    root->right->left->left = new Node(2);
    root->right->left->right = new Node(3);
    root->right->left->left->right = new Node(9);


    //int a = countLeafNode(root);
    //cout<<a;

    vector<int> result;
    //preorder(root,result);
    //for(int i : result) {
    //    cout<<i<<" ";
    // }
    inorder(root,result);

}
