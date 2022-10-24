#include <iostream>

using namespace std;

class Node {
    public:
        int data;
        Node * next;
};

class LinkedList {
    public:
        int lenght=0;;
        Node * head, * tail;
        LinkedList(){
            head=NULL;
            tail=NULL;
        }
    void insertNodeAtFront(int value){
        Node * newNode = new Node;
        newNode->data=value;
        newNode->next=NULL;
        if (head==NULL){
            head=newNode;
            tail= newNode;
            
        }else{
            newNode->next=head;
            head=newNode;
        }
        lenght++;
    }

    void insertNodeAtEnd(int value){
        Node * newNode = new Node;
        newNode->data=value;
        newNode->next=NULL;
        if (head==NULL){
            head= newNode;
            tail=head;
            return;
        }else{
            tail->next=newNode;
            tail=tail->next;
            return;
        }
        lenght++;
    }

    
};

int main(){
    LinkedList list;
    list.insertNodeAtFront(40);
    list.insertNodeAtFront(30);
    list.insertNodeAtFront(20);
    list.insertNodeAtFront(10);
    list.insertNodeAtFront(21);
    cout<<list.lenght<<endl;
    return 0;
}