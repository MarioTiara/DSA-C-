#include <iostream>
using namespace std;
#define MAX 10

class Stack{
    int top;
    public:
        int arr[MAX];
        Stack(){
            top=-1;
        }
        void push(int item);
        int pop();
        int peek();
        void display();
};

void Stack::push(int item){
    if (top>=(MAX-1)){
        cout<<"\nStack Overflow";
    }else{
        arr[++top]=item;
        cout<<"\nElement added "<<item;
    }
}

void Stack::display(){
    for (int el:arr){
        cout<<"\n"<<el<<" ";
    }
}

int Stack::pop(){
    if (top<0){
        cout<<"\nStack underflow";
    }else{
        int item=arr[top--];
        return item;
    }
}

int Stack::peek(){
    if (top<0){
        cout<<"\nStack underflow";
        return -1;
    }else{
        int item=arr[top];
        return item;
    }
}

int main(){
    Stack stack;
    stack.push(23);
    stack.push(43);
   // stack.display();
    cout<<"\npop:"<<stack.pop();
    cout<<"\npeek:"<<stack.peek();
    stack.display();
    return 0;
}