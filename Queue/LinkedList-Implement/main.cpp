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

int Queue::dequeue(){
    Node * tempPtr;
    if (front==NULL){
        cout<<"Queue underflow"<<endl;
        return -1;
    }
    tempPtr=front;
    if (front==rear){
        front=rear=NULL;
    }else{
        front=front->next;
        int item=tempPtr->data;
        delete tempPtr;
        return item;
    }
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
    queue.enqueue(89);
    queue.enqueue(43);
    queue.enqueue(21);
    queue.display();
    cout<<"\n dequeue: "<<queue.dequeue()<<endl;
    queue.display();
    return 0;
}