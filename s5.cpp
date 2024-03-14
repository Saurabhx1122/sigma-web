#include<iostream>
using namespace std;

int c = 50;

int main(){
     //********************build in data type****************

    // int a, b, c;
    // cout<<"Enter the value of a:"<<endl;
    // cin>>a;

    // cout<<"Enter the value of b:"<<endl;
    // cin>>b;
    // c = a + b;
    // cout<<"the sum is "<<c<<endl;
    // cout<<"the global c is "<<::c; // "::" this is  called scope resulation operation

//********************float, double , and long double literals****************
    // float a = 3.4F;
    // long double b = 3.4L;
    // cout<<"the size of 34.4 is "<<sizeof(34.4)<<endl;
    // cout<<"the size of 34.4f is "<<sizeof(34.4f)<<endl;
    // cout<<"the size of 34.4F is "<<sizeof(34.4F)<<endl;
    // cout<<"the size of 34.4l is "<<sizeof(34.4l)<<endl;
    // cout<<"the size of 34.4L is "<<sizeof(34.4L)<<endl;

    //********************reference variables****************
     // rohan das----> monty -------> rohu-------> king coder

    //  float x = 500;
    //  float & y = x;
    //  cout<<x<<endl;
    //  cout<<y<<endl;

    //********************Typecasting****************

    int  a = 45;
    float b = 45.6;

    cout<<"the value of a is "<<(float)a<<endl;
    cout<<"the value of a is "<< float(a)<<endl;

    cout<<"the value of b is "<<(int)a<<endl;
    cout<<"the value of b is "<<int(a)<<endl;
    int c = (b);

    cout<<"the expression is "<<a + b<<endl;
    cout<<"the expression is "<<a + int(b)<<endl;
    cout<<"the expression is "<<a + (int)b<<endl;

    return 0;
}