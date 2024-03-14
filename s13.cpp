#include<iostream>

using namespace std;
//function prototype
//type function-name (arguments); 
//int sum (int a, int b);// <------------ this is acceptable
//int sum(int a, b); // this is not acceptable
int sum (int , int ); // this is acceptable
//void g(void);// this is acceptable
void g();// this is also  acceptable


int main(){
int num1, num2;
cout<<"Enter first number "<<endl;
cin>>num1;
cout<<"Enter second number "<<endl;
cin>>num2;
// num1 and num2 are actual parameters
cout<<"the sum is "<<sum(num1, num2);
g();

    return 0;
}

int sum(int a, int b){
// Formal parameters a and b  are taking from actual parameter  num1 and num2
int c = a+b;
return c;
}

   void g(){
    cout<<"\nhello, good morning";
        
}
