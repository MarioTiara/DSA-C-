#include <iostream>

using namespace std;

char * Reverse (char A[]){
    static char B[7];
    int i=0;
    //get A lengt
    int j;
    while(A[i] !='\0') i++;
    for (j=0; i>=0 ; i--, j++){
        cout<<"j:"<<j<<" i:"<<i<<endl;
        B[j]=A[i-1];
    }
    B[j]='\0';
    return B;
};

int main(){
    cout<<"Reverse string"<<endl;

    char A[]= "python";
    char *B= Reverse(A);
    cout<<B<<endl;
    
}