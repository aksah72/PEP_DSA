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



int main(){
    Node* root = NULL;
    root = new Node(50);
    root->right = new Node(5);
    root->left = new Node(2);
    root->left->left = new Node(3);
    root->left->right = new Node(4);

}