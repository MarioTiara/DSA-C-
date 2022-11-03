#include <iostream>



using namespace std;


class Node {
    public:
        int data;
        Node *left, *right;
};

Node * createNewNode(int val){
    Node * newNode= new Node();
    newNode->data=val;
    newNode->left=NULL;
    newNode->right=NULL;
    return newNode;
}

Node * insert (Node* root, int value){
    if (root==NULL){
        return createNewNode(value);
    }
    if (root->data<value){
        root->right=insert(root->right, value);
    }else if (root->data>value){
        root->left=insert(root->left, value);
    }

    return root;
}


int main(){
    Node * root =NULL;
    root=insert(root, 100);
    root = insert(root,50);
    root = insert(root,150);
    root = insert(root,50);
    
    return 0;
}

