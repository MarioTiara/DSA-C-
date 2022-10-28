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
    string delete ();
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

int main(){
    return 0;
}