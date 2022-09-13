#include <iostream>

using namespace std;
struct Node {
    int data;
    struct Node * next;
};

struct Node * first =nullptr;
void create (int A[], int n){
    int i;
    struct Node *t, *last;
    //First Node
    first= new Node();
    first->data=A[0];
    first->next=nullptr;
    last=first;

    //all next node will b created
    for (i=1; i<n; i++){
        t=new Node();
        t->data=A[i];
        t->next=nullptr;
        last->next=t;
        last=t;
    }
};

//using loop
int Count(struct Node * p){
    int C=0;
    while(p!=nullptr){
        C++;
        p=p->next;
    }
    return C;
};

//using Recursive
int Count2(struct Node * p){
    if (p==nullptr){
        return 0;
    }else {
        return Count2(p->next)+1;
    }
};
int main(){

    int A[]={3,5,7,10,15};
    create(A,5);
    cout<<Count2(first);
    return 0;
}