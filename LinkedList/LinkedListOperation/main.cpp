#include <iostream>

using namespace std;

class Node {
    public:
        int data;
        Node * next;
};

class LinkedList {
    public:
        int lenght=0;;
        Node * head, * tail;
        LinkedList(){
            head=NULL;
            tail=NULL;
        }
    void insertNodeAtFront(int value){
        Node * newNode = new Node;
        newNode->data=value;
        newNode->next=NULL;
        if (head==NULL){
            head=newNode;
            tail= newNode;
            
        }else{
            newNode->next=head;
            head=newNode;
        }
        lenght++;
    }

    void insertNodeAtEnd(int value){
        Node * newNode = new Node;
        newNode->data=value;
        newNode->next=NULL;
        if (head==NULL){
            head= newNode;
            tail=head;
            return;
        }else{
            tail->next=newNode;
            tail=tail->next;
            return;
        }
        lenght++;
    }

    void insertAtPosition (int pos, int value){
        Node * prev= new Node;
        Node *current = new Node;
        current =head;
        Node * newNode= new Node;
        newNode->data=value;
        newNode->next=NULL;

        if (pos>1){
            cout<<"Postion cannot be less than one";
        }else if (pos==1){
            newNode->next=head;
            head=newNode;
        }else{
            for (int i=1; i<pos; i++){
                prev=current;
                current=current->next;
                if (current==NULL){
                    cout<<"Invalid Position";
                    return;
                }
            }
            prev->next=newNode;
            newNode->next=current;
        }

        lenght++;
    }

    void search (int value){
        Node  *current = new Node;
        current=head;
        while(current->next!=NULL){
            if (current->data==value){
                cout<<"Element "<<value<<<" is found";
                return;
            }
            current=current->next;
        }
         cout<<"Element "<<value<<<" is not found";
    }

    
};

int main(){
    LinkedList list;
    list.insertNodeAtFront(40);
    list.insertNodeAtFront(30);
    list.insertNodeAtFront(20);
    list.insertNodeAtFront(10);
    list.insertNodeAtFront(21);
    cout<<list.lenght<<endl;
    return 0;
}