#include<iostream>

using namespace std;

struct Array {

    int A [10];
    int size;
    int length;
};
int BinarySearch (struct Array arr, int key){
    int l, mid, h;
    l=0;
    h=arr.length-1;
    while (l<=h)
    {
        mid= (l+h)/2;
        if(key==arr.A[mid]){
            return mid;
        }else if(key<arr.A[mid]){
            h=mid-1;
        }else {
            l=mid+1;
        }
    }

    return -1;
    
}

int RBinarySearch(int A[], int l, int h, int key){
    int mid;
    if(l<=h){
        mid=(l+h)/2;
        if (key==A[mid]){
            return mid;
        }else if (key<A[mid]){
            return RBinarySearch(A,l, mid-1,key);
        }else {
            return RBinarySearch(A,mid+1, h, key);
        }
    }
    return -1;
}

int main(){
    struct Array arr= {{2,3,4,5,6},10,5};
    cout<<RBinarySearch(arr.A,0,arr.length,5)<<endl;
    return 0;
}