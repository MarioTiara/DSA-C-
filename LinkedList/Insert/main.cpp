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

struct Node * Search(struct Node * p, int key){
    while (p!=nullptr){
        if (key==p->data){
            return p;
        }
        p=p->next;
    }

  return NULL;
};

void InsertFirst (struct Node *p, int value){
    struct Node * newNode=new Node();
    newNode->data=value;
    newNode->next=first;
    first=newNode;
    
}

int main(){
    int [] ={3,5,7,10,25}
    create(A,5);

    return 0;
}