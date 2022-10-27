#include<iostream>

using namespace std;
struct Array {

    int A [10];
    int size;
    int length;
};

int Get(struct Array * arr, int index){
    if (index>0&& index<arr->length){
        return arr->A[index];
    }
    return -1;
};

void set(struct Array * arr, int index, int value){
    if (index>0 && index<arr->length){
        arr->A[index]=value;
    }
};

int max (struct Array * arr){
    int max=0,i;
    for (i=0; i<arr->length; i++){
        if (max>arr->A[i]){
            max=arr->A[i];
        }
    }

    return max;
};

int min (struct Array * arr){
    int min=0,i;
    for (i=0; i<arr->length; i++){
        if (min<arr->A[i]){
            min=arr->A[i];
        }
    }

    return min;
};

int main(){


    return 0;
}