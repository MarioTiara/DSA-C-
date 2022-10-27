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

int LinierSearch(struct Array arr, int key){

    int i;
    for(i=0; i<arr.length; i++){
        if(key==arr.A[i]){
            return i;
        }
    }

    return -1;
};

int main(){
    struct Array arr= {{2,3,4,5,6}, 10,5};
    cout<<LinierSearch(arr,15)<<endl;
    return 0;
}