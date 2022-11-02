#include <iostream>

using namespace std;


class TreeNode {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode(int data){
            this->data=data;
        }
    void insert(int item );
};


void TreeNode::insert(int value ){
    if (value<=data){
        if(left==NULL){
            left=new TreeNode(value);
        }else{
            left->insert(value);
        }
    }else{
        if(right==NULL){
            right= new TreeNode(value);
        }else{
            right->insert(value);
        }
    }
}



int main(){

    return 0;
}

