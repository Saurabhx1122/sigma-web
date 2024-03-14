#include<iostream>
using namespace std;

int main(){
    
    int a = 3;
    int b = 4;
    int c = a;
    a = b;
    b = c;

    cout<<a<<endl; 
    cout<<b<<endl;

  return 0;
}