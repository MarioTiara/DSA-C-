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
       // cout<<head->data;
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

        if (pos<1){
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
        
        while(current!=NULL){
            if (current->data==value){
                cout<<"Element "<<value<<" is found"<<endl;
                return;
            }
            current=current->next;
            cout<<current->data<<endl;
        }
         cout<<"Element "<<value<<" is not found"<<endl;
    }

   

    void display(){
        Node * current = new Node;
        current=head;
        while(current!=NULL){
            cout<<current->data<<" ";
            current=current->next;
        }
    }

    void deleteNode (int value){
        bool flag= false;
        Node  * current = new Node;
        Node * previous = new Node;
        previous=head;
        current=head;
        while(current!=NULL){
            if (current->data==value and  current==head){
                head=current->next;
                free(current);
                flag=true;
                break;
            }else if ( current->data==value){
                previous->next=current->next;
                if (current==tail){
                    tail=previous;
                }
                free(current);
                flag=true;
                break;
            }else{
                previous=current;
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
    list.insertNodeAtFront(10);
    list.insertAtPosition(3,21);
    list.insertNodeAtEnd(56);
    list.display();
    list.deleteNode(10);
    list.display();

    return 0;
}

