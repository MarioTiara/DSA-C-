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

int Max(struct Node * p){
    int max=INT32_MIN;
    while (p){
        if (p->data>max){
            max=p->data;
        }
        p=p->next;
    }

    return max;
}

int max (struct Node * p){
    static int m=INT32_MIN;
    if (p==nullptr){
        return m;
    }else {
        if (p->data>m){
            m=p->data;
        }
        return max(p->next);
    }
}

int main(){
    int A[]={3,5,7,90,15};
    create(A,5);
    cout<<max(first)<<endl;
    return 0;
}