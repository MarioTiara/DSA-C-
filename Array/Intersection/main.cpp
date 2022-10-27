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



//Intersection for sorted Array
struct Array Intersection (struct Array *arr1, struct Array *arr2 ){
   int i=0, j=0, k=0;
   struct Array arr3;
   arr3.length=arr1->length+arr2->length;
   for (;i<arr1->length; i++){
        if (arr1->A[i]==arr2->A[i]){
            arr3.A[k++]=arr1->A[i];
        }
   }

   arr3.length=k;
   arr3.size=10;
   return arr3;
};

struct Array Intersection2 (struct Array *arr1, struct Array *arr2 ){
   int i=0, j=0, k=0;
   struct Array arr3;
   while(i<arr1->length && j<arr2->length){
        if (arr1->A[i]!=arr2->A[j]){
            j++;i++;
        }else if (arr1->A[i]==arr2->A[j]){
            arr3.A[k++]=arr1->A[i++];
            j++;
        }
   }
   

   arr3.length=k;
   arr3.size=10;
   return arr3;
};



int main(){
    struct Array arr1={{2,6,10,15,25,20}, 10,5};
    struct Array arr2= {{3,6,7,15,20},10,5};
   
   struct Array arr3 =Intersection2(&arr1, &arr2);
   Display(arr3);

    

    return 0;
}