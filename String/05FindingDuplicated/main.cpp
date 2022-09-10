#include <iostream>
#include<bits/stdc++.h>
using namespace std;


void findDuplicateUsingHash(){
    char A[]="findingsi";
    int H [26]={0}, i;

    for (i=0; A[i]!='\0'; i++){
        int index=A[i]-97;
        H[index]+=1;
    }
    for (i=0; i<26; i++){
        if (H[i]>1){
            cout<<char(i+97)<<" :"<<H[i]<<endl;
        }
    }
}
int main(){

    findDuplicateUsingHash();

  
    return 0;
}