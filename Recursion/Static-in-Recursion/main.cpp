#include<iostream>

using namespace std;


int fun(int n){
    static int x=0;
    //cout<<x<<endl;
    if (n>0){
        x++;       
        return fun(n-1)+x;
    }
    return 0;
};

int main(){
    fun(3);
    return 0;
}
