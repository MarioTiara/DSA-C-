#include<iostream>
using namespace std;

#define MAX 10
class Queue{
    int front, rear;
    int arr[MAX];
    public:
        Queue(){
            front=rear=-1;
        }
    
    void enqueue(int item);
    int dequeue();
};

void Queue::enqueue(int item){
    if (rear==(MAX-1)){
        cout<<"Queue overflow"<<endl;
    }else if(front==-1 and rear==-1){
        front=rear=0;
        arr[rear]=item;
        cout<<"Item Inserted "<<item<<endl;
    }else{
        arr[rear++]=item;
        cout<<"Item Inserted "<<item<<endl;
    }
}

int main(){
    Queue queue;
    queue.enqueue(10);
    queue.enqueue(21);
    return 0;
}