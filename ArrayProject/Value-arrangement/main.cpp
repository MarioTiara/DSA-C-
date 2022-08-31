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



 void swap(int *x, int *y){
        int temp;
        temp=*x;
        *x=*y;
        *y=temp;
    };

void Rearrange (struct Array *arr){
    int i,j;
    i=0;
    j=arr->length-1;
    while (true)
    {
        cout<<"Elements are"<<endl;
        while (arr->A[i]<0)
        {
            i++;
        }
        while (arr->A[i]>=0)
        {
            j--;
        }
        if (i<j){
            swap(&arr->A[i], &arr->A[j]);
        }else {
            break;
        }       
    }
    
};

void Rearrange2(struct Array *arr){
    int pivot=0, i=-1;
    for (int j=0; j<arr->length;j++){
        if(arr->A[j]<pivot){
            i++;
            if(i!=j){
                swap(arr->A[i], arr->A[j]);
            }
        }
    }
};


int main(){
    struct Array arr= {{2,-3,15,10,-15,-7}, 10,6};

    Rearrange2(&arr);
  
    Display(arr);
    return 0;
}