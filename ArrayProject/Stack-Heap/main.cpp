#include<iostream>
using namespace std;


int main(){
    int A[5]={1,2,3,4,5}; // static -> will be saved on stack
    for (int i=0; i<5; i++){
        cout<<A[i]<<endl;
    }
    cout<<endl;
    int *p;
    p= new int[5]; // will be saved on heap
    p[0]=1; p[1]=2; p[2]=3; p[3]=4; p[4]=6;
    for (int i=0; i<5; i++){
        cout<<p[i]<<endl;
    }
    return 0;
}