#include <iostream>

using namespace std;

// it will work for some case, but itl will be false in same case
// which is different set of alphabet produce the same sum of ASCI
void myOwnSolution(){
    char A []="decimas";
    char B [] ="medical";
    int i, Asum=0, Bsum=0;

    for (i=0; A[i]!='\0'; i++){
        Asum+=(A[i]-97);
    }
    cout<<Asum<<endl;
    for (i=0; B[i]!='\0'; i++){
        Bsum+=(B[i]-97);
    }
    cout<<Bsum<<endl;
    if (Asum==Bsum){
        cout<<A <<" and " <<B<<"is palindrome" <<endl;
    }
}

void usingHash(){
    bool IsAnagram=true;
    char A []="decimal";
    char B [] ="medical";
    int H [26]={0};
    for (int i=0; A[i]!='\0'; i++){
        H[A[i]-97]+=1;
    }
    for (int i=0; B[i]!='\0'; i++){
        H[B[i]-97]-=1;
    }

    for (int i=0; i<26; i++){
        if (H[i]==-1){
            cout<<A <<" and "<<B<<" are not Anagram"<<endl;
            IsAnagram=false;
            break;
        }
    }

    if (IsAnagram){
        cout<<A <<" and "<<B<<" are Anagram"<<endl;
    }
}

int main(){
    usingHash();

    return 0;
}