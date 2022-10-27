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
    void display();
};

void Queue::enqueue(int item){
    if (rear==(MAX-1)){
        cout<<"Queue overflow"<<endl;
    }else if(front==-1 and rear==-1){
        front=rear=0;
        arr[rear]=item;
        cout<<"Item Inserted "<<item<<endl;
    }else{
        rear++;
        arr[rear]=item;
        cout<<"Item Inserted "<<item<<endl;
    }
}

int Queue::dequeue(){
    int item;
    if (rear==-1){
        cout<<"Queue underflow"<<endl;
        return -1;
    }else{
        item=arr[front];
        if (front==rear){
            front=rear=-1;
        }else{
            front++;
        }
        return item;
    }
}

void Queue::display(){
    for (auto a :arr){
        cout<<a<<" ";
    }
}

int main(){
    Queue queue;
    queue.enqueue(10);
    queue.enqueue(21);
    queue.display();
    cout<<endl;
    cout<<queue.dequeue()<<endl;
    cout<<queue.dequeue()<<endl;
    cout<<queue.dequeue()<<endl;
    return 0;
}