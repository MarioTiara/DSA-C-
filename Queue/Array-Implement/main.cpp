#include<iostream>
using namespace std;

#define MAX 10;
class Queue{
    int front, rear;
    int arr[MAX];
    public:
        Queue(){
            front==rear=-1;
        }
    
    void enqueue(int item);
    int dequeue();
}