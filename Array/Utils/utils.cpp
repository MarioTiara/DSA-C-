namespace ArrayPorject::Utils {
    void swap(int *x, int*y){
        int temp;
        temp=*x;
        *x=*y;
        *y=temp;
    }
}