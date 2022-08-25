#include<iostream>
using namespace std;

struct Array {
    int A[10];
    int size;
    int length;
};
void swap(int *x, int*y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

void reverse(struct Array *arr){
    int i,j;
    for (i=0, j=arr->length-1; i<j; i++,j--){
        swap(&arr->A[i],&arr->A[j]);
    }
};

void shift (struct  Array *arr)
{
    int first =arr->A[0];
    for (int i=0; i<arr->length-1; i++){
        arr->A[i]=arr->A[i+1];
    }
    arr->A[arr->length-1]=first;
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
    //reverse(&arr);
    shift(&arr);
    Display(arr);
    return 0;
}