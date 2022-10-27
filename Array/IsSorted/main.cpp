#include <iostream>

using namespace std;

struct Array {

    int A [10];
    int size;
    int length;
};
void Display (struct Array arr){
    int i;
    cout<<"Elements are"<<endl;
    for (i=0; i<arr.length; i++){
        cout<<arr.A[i]<<endl;
    }
};
bool isSorted (struct Array arr){
    int i;
    for(i=0; i<arr.length-1; i++){
        if(arr.A[i]>arr.A[i+1]){
            return false;
        }
    }
    return true;
};

int main(){
    struct Array arr= {{2,3,4,9,6}, 10,5};
    cout<<isSorted(arr);
    return 0;
}