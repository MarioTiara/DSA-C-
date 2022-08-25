#include<iostream>

using namespace std;

int main(){

    int *p, *q;
    p=new int [3];
    p[0]=1; p[1]=2; p[2]=3;

    q=new int[5];
    for(int i=0; i<3; i++){
        q[i]=p[i];
    }
    free(p); //realese p memory on heap
    p=q;
    q=nullptr; //delete pointer value
    for (int i=0; i<5; i++){
        cout<<p[i]<<endl;
    }
    return 0;
}