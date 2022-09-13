#include <iostream>

using namespace std;

struct Node {
    int data;
    struct Node * next;
}

struct Node * first =nullptr;
void create (int A[], int n){
    int i;
    struct Node *t, *last;
    first= new Node();
    first->data=A[0];
    first->next=nullptr;
    last=first;
    for (i=1; i<n; i++){
        t=new Node();
    }
}

int main(){

    return 0;
}