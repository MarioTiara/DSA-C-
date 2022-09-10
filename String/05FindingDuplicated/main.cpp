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

void FindingDuplicateByBiteWise(){
        //findDuplicateUsingHash();
    char A[] ="findings";
    int H =0, x=0;
    for (int i=0; A[i]!='\0'; i++){
        x=1;
        x=x<<(A[i]-97);
        if ((x&H)>0){
            cout<<A[i]<<" is duplicate"<<endl;
        }else {
            H=x|H;
        }
    }
}
int main(){
    findDuplicateUsingHash();
    FindingDuplicateByBiteWise();

  
    return 0;
}