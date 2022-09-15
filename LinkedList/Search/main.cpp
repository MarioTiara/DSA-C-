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
struct Node * ImprovedSerach(struct Node *p, int key){
    Node * q = nullptr;
    while(p!=nullptr){
        if (key==p->data){
            q->next=p->next;
            p->next=first;
            first=p;
            return first;
        }
        q=p;
        p=p->next;
    }


    
};


int main(){
    int A[]={8,3,7,12,9};
    create(A,5);
    cout<<ImprovedSerach(first, 12)->data<<endl;
    return 0;
}