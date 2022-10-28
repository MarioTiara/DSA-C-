#include <iostream>

using namespace std;
#define MAX 5
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


class box{
    public:
        int top;
        string arr [MAX];
        box(){
            top=-1;
        }
    void insert(string item);
    void Delete();
    void display();
};

void box::insert(string item){
    if (top>=(MAX-1)){
        cout<<"box is overflow"<<endl;
    }else{
        arr[++top]=item;
        cout<<item<<" inserted"<<endl;
    }
}

void box::display(){
    for (int i=top; i>=0; i--){
        cout<<arr[i]<<" ";
    }
}

void box::Delete(){
    if(top<0){
        cout<<"box is underflow"<<endl;
    }else{
        top--;
    }
}

int main(){
    box Bookboox;
    Bookboox.insert("Book1");
    Bookboox.insert("Book2");
    Bookboox.insert("Book3");
    Bookboox.insert("Book4");
    Bookboox.display();
    Bookboox.Delete();
    cout<<endl;
    Bookboox.display();
    
    return 0;
}