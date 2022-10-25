#include <iostream>
using namespace std;


class DLLNode{
    public:
        int data;
        DLLNode * prev;
        DLLNode *next;
};

class LinkedList {
    public:
        DLLNode * head, *tail;
        LinkedList(){
            head=NULL;
            tail=NULL;
        }
    void insertNodeAtFront(int value){
        DLLNode * newNode= new DLLNode;
        newNode->data=value;
        newNode->next=NULL;
        newNode->prev=NULL;
        if (head==NULL){
            head=newNode;
            tail=newNode;
        }else{
            newNode->next=head;
            head=newNode;
        }
    }

    void display(){
        DLLNode * current = new DLLNode;
        current=head;
        while(current!=NULL){
            cout<<current->data<<" ";
            current=current->next;
        }
    }

    void Delete(int value){
        DLLNode * current = new DLLNode;
        DLLNode * previous = new DLLNode;
        bool flag= false;
        current=head;
        while(current!=NULL){
            if (current->data==value && current==head){
                head=current->next;
                free(current);
                flag=true;
                break;
            }else if (current->data==value){
                previous=current->prev;
                previous->next=current->next;
                if (current==tail){
                    tail=current->prev;
                }
                free(current);
                flag=true;
                break;
            }else{
                current=current->next;
            }
        }
        if (flag){
            cout<<"Element Deleted"<<endl;
        }else{
            cout<<"Element not found"<<endl;
        }
    }
};


int main(){ 
    LinkedList list;
    list.insertNodeAtFront(40);
    list.insertNodeAtFront(30);
    list.insertNodeAtFront(20);
    list.insertNodeAtFront(31);
    list.insertNodeAtFront(77);
    list.display();
    list.Delete(30);
    list.display();
    return 0;
}