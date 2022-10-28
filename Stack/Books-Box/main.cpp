#include <iostream>

using namespace std;
class Node {
    public:
        string data;
        Node * next;
};

class Boox{
    public:
        Node * top;
        Boox(){
            top=NULL;
        }
    void insert(string data);
    void Delete ();
    void display();
};


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

void Boox::display(){
    Node * temp= new Node();
    temp=top;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
    Boox Bookboox;
    Bookboox.insert("Book1");
    Bookboox.insert("Book2");
    Bookboox.insert("Book3");
    Bookboox.insert("Book3");
    Bookboox.display();
    
    return 0;
}