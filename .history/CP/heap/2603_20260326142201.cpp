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

void preorder(Node* root , int curr)