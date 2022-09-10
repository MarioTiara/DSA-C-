#include <iostream>

using namespace std;

bool isPalindrome1(char A []){
    int lengt=0, i=0;
    
    while(A[lengt]!='\0') lengt++;
    char B [lengt];
    
    lengt-1;
    for (; lengt>=0; lengt--, i++){
        B[i]=A[lengt];
    }
    B[i]='\0';
    cout<<B<<endl;
    
    return false;
}

int main(){
    char A []="madam";
    isPalindrome1(A);

    return 0;
}