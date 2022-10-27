#include <iostream>

using namespace std;

class Node {
    public:
        int data;
        Node * next;
};

class Queue {
    public:
        Node * front, *rear;
        Queue(){
            front=rear=NULL;
        }
    void enqueue(int item);
    int dequeue ();
    void display();
};

void Queue::enqueue(int item){
    Node * newNode= new Node();
    newNode->data=item;
    newNode->next=NULL;
    if (front==NULL){
        front=rear=newNode;
    }else{
        rear->next=newNode;
        rear=newNode;
    }

    cout<<"Element inserted"<<endl;
}

void Queue::display(){
    Node *temp=front;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}



int main(){
    Queue queue;
    queue.enqueue(21);
    queue.enqueue(43);
    queue.display();
    return 0;
}