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

void Reverse2 (string& str){
  int n=str.length();
  for(int i=0 ; i<n; i++, n--){
    swap(str[i], str[n]);
  } 
};

int main(){
    cout<<"Reverse string"<<endl;
    string str="python";
    Reverse2(str);
    cout<<str;

    
    
    
   
    
}