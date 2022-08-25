#include <iostream>
using namespace std;

struct Array {

    int A [10];
    int size;
    int length;
};
void Display (struct Array arr){
    int i;
    cout<<"Elements are:"<<endl;
    for (i=0; i<arr.length; i++){
        cout<<arr.A[i]<<endl;
    }
};

void InertSort(struct Array *arr, int x){
    int i=arr->length-1;
    if (arr->length==arr->size){
        return;
    }

    while (i>=0 && arr->A[i]>x)
    {
        arr->A[i+1]=arr->A[i];
        i--;
    }

    arr->A[i+1]=x;
    arr->length++;
    
}

int main(){
    struct Array arr= {{2,3,4,5,10,15}, 10,6};
    //cout<<arr.length;
    InertSort(&arr,1);
    Display(arr);

    return 0;
}