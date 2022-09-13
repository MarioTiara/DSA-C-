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

struct Node * search(struct Node * p, int key){
    if (p==nullptr){
        return NULL;
    }if (key==p->data){
        return p;
    }
    return Search(p->next, key);
}
int main(){
    int A[]={3,5,7,10,15};
    create(A,5);
    cout<<search(first, 15)->data<<endl;
    return 0;
}