#include<iostream>
using namespace std;
 int product(int a, int b){
    // not recommended to use below lines with inline functions
    // static int c = 0; // this executes only once
    // c = c + 1; //  next time this function run the value of c will  we retained
    return a*b;
} 

float moneyReceived(int currentmoney, float factor =1.04){
    return currentmoney * factor;
}

//int streln(const char *p){  // this is constant arguments its hepls you to not able to change your value 

int main(){
    int a, b;
    // cout<<"the value of a and b is "<<endl;
    // cin>>a>>b;
    // cout<<"the product of a and b is "<<product(a,b)<<endl;
    int money = 100000;
    cout<<"1. if you have "<<money<<" RS in your bank account, you will recive RS "<<moneyReceived
    (money)<< " after  1 year"<<endl; 
     cout<<"2. for VIP: if you have "<<money<<" RS in your bank account, you will recive "<<moneyReceived
    (money, 1.1)<< "RS after  1 year"; 

    
    return 0;
}