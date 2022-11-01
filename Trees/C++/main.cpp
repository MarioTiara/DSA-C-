#include <iostream>

using namespace std;


class TreeNode {
    public:
        int data;
        TreeNode *left, *right;
    TreeNode createNewNode(int value);
};

TreeNode TreeNode::createNewNode(int value){
    TreeNode * newNode = new TreeNode;
    newNode->data=value;
    newNode->left=NULL;
    newNode->right=NULL;
    return newNode;
}

int main(){

    return 0;
}

