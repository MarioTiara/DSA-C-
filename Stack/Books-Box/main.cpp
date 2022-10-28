#include <iostream>

using namespace std;
class Node {
    public:
        string data;
        Node * next;
}

class Boox{
    public:
        Node * top;
        Boox(){
            top=NULL;
        }
    void insert(string data);
    void Delete ();
    void display();
}


void Boox::insert(string data){
    Node * newNode = new Node();
    newNode->data=data;
    newNode->next=NULL;
    if (top==NULL){
        newNode->next=NULL;
    }else{
        newNode->next=top;
    }

    top=newNode;
}

void Boox::Delete(){
    Node * temp = new Node();
    if (top==NULL){
        cout<<"Box is empty"<<endl;
    }

    temp=top;
    top=top->next;
    cout<<temp->data<<" has deleted"<<endl;
    delete temp;

}

int main(){
    return 0;
}