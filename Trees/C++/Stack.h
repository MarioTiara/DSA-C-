#include <iostream>
using namespace std;

namespace Tree{
    
class Node {
        public:
            int data;
            Node *next;
};

class Stack{
        public:
            Node * top;
            Stack(){
                top=NULL;
            }
        void push(int data);
        int pop();
        int peek();
        void display();
};

void Stack::push(int data){
    Node * newNode= new Node();
    newNode->data=data;
    if (top==NULL){
        newNode->next=NULL;
    }else{
        newNode->next=top;
    }
    top=newNode;

    
}

int Stack::pop(){
    Node * temp;
    if (top==NULL){
        return -1;
    }
    temp=top;
    top=top->next;
    int data=temp->data;
    delete temp;
    return data;
}

void Stack::display(){
    Node * temp;
    if (top==NULL){
        cout<<"Satck is underflow"<<endl;
        return;
    }
    temp=top;
    while (temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

}