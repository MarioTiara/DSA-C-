#include <iostream>
using namespace std;

class Node {
        public:
            int dat;
            Node *next;
};

class Stack{
        public:
            Node * top;
            Stack(){
                top=NULL;
            }
        void push(int data);
        void pop();
        int peek();
        void display();
}

int main(){
    return 0;
}