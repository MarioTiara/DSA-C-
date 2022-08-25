#include <iostream>

using namespace std;

struct Array {

    int A [10];
    int size;
    int length;
};

void swap(int *x, int*y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}


int LinierSearch(struct Array *arr, int key){

    int i;
    for(i=0; i<arr->length; i++){
        if(key==arr->A[i]){
            //swap(&arr->A[i], &arr->A[i-1]); // using transposition
            swap(&arr->A[i], &arr->A[0]); // using Move to front
            return i;
        }
    }

    return -1;
};

void Display (struct Array arr){
    int i;
    cout<<"Elements are"<<endl;
    for (i=0; i<arr.length; i++){
        cout<<arr.A[i]<<endl;
    }
};

int main(){
    struct Array arr= {{2,3,4,5,6}, 10,5};
    cout<<LinierSearch(&arr,5)<<endl;
    Display(arr);
    return 0;
}