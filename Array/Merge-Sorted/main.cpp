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
    for (i=0; i<arr.length-1; i++){
        cout<<arr.A[i]<<endl;
    }
};


//this method is just worked for merging two sorted array.
//if the input is unsorted array, we can sorting first the array or just sorting the merged array
struct Array Merge (struct Array *arr1, struct Array *arr2 ){
    int i,j,k;
    i=j=k=0;
    
    struct Array arr3;
    arr3.length=arr1->length+arr2->length;
    arr3.size=arr1->size;

    while ( i< arr1->length && j<arr2->length)
    {
        if (arr1->A[i]<arr2->A[j]){
            arr3.A[k++]=arr1->A[i++];
            
        }
        else if (arr2->A[j]==arr1->A[i]){
            arr3.A[k++]=arr2->A[j];
            arr3.A[k++]=arr1->A[i];
        }
        else if (arr2->A[j]<arr1->A[i]){
            arr3.A[k++]=arr2->A[j++];
        }  
    }

    cout<<"Done";

    return arr3;
    
};

int main(){
    struct Array arr1={{3,8,16,20,25}, 10,5};
    struct Array arr2= {{4,10,12,22,23},10,5};
    struct Array arr3=Merge (&arr1, &arr2);

    Display(arr3);

    

    return 0;
}