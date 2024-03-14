#include<iostream>
using namespace std;

int sum(int a, int b){
  int c = a + b;
  return c;

}
// this will not swap a and b 
void swap(int a, int b){ //temp a,  b
    int temp = a;        // 4    4,  5  
    a = b;               // 4    5,  5
    b = temp;            // 4    5,  4

}
// call by referance using pointer
void swappointer(int* a, int* b){ //temp a,  b
    int temp = *a;        // 4    4,  5  
    *a = *b;               // 4    5,  5
    *b = temp;            // 4    5,  4
}

// call by referance using c++ reverence variable 
//int & 
void swapReferenceVar(int &a, int &b){ //temp a,  b
    int temp = a;        // 4    4,  5  
    a = b;               // 4    5,  5
    b = temp;            // 4    5,  4

    // return a;
}
int main(){
    int x = 4, y = 5; 
    // cout<<"the sum of 4 and 5 is "<<sum(4,5);
    cout<<"the value of a is "<<x<<" and the value of b is "  <<y<<endl;
    //swap(x, y); // this will not swap a and b
    //swappointer(&x, &y); // this will swap the value using  using pointer reference
    swapReferenceVar(x, y); // this will swap the value using c++ reference  variable
    //swapReferenceVar(x, y) = 755; // this will swap the value using c++ reference  variable
    cout<<"the value of a is  "<<x<<" and the value of b is "  <<y<<endl;
    return 0;
}