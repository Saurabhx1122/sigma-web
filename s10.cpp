#include<iostream>
using namespace std;

int main(){

    //  what is pointer?------> a data type which holds the address of other data types

    int a = 4;
    int* b = &a;

    // &-------> Address of operator
    cout<<"the addrress of a is" <<&a<<endl;
    cout<<"the addrress of a is" <<b<<endl;
    
    // *-------> (value at) derference operator
    cout<<"the value at address b is "<<*b<<endl;
    return 0;
}