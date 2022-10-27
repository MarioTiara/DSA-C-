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
        void pop();
        void peek();
};

void Stack::push(int item){
    if (top>=(MAX-1)){
        cout<<"\nStack Overflow";
    }else{
        arr[++top]=item;
        cout<<"\nElement added"<<item;
    }
}

int main(){
    Stack stack;
    stack.push(23);
    stack.push(43);
    return 0;
}