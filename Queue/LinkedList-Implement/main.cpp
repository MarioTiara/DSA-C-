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